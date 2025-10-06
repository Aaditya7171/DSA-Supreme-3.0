class Twitter
{
    struct Tweet
    {
        int tweetId;
        int time;
        Tweet(int id, int t) : tweetId(id), time(t) {};
    };

    // global clock
    int globalTime;

    // map-> {userId to the tweets that the user has made}
    unordered_map<int, vector<Tweet>> tweets;

    // map-> {userId to his following's map}
    unordered_map<int, unordered_set<int>> following;

    class compare
    {
    public:
        bool operator()(const Tweet &a, const Tweet &b)
        {
            return a.time > b.time;
        }
    };

public:
    Twitter()
    {
        globalTime = 0;
    }

    void postTweet(int userId, int tweetId)
    {
        tweets[userId].push_back(Tweet(tweetId, globalTime++));
    }

    vector<int> getNewsFeed(int userId)
    {
        // have to return the tweetIds of 10 most recent tweets
        // done by me or my followings
        // minHeap to keep track of top 10 most recent tweets
        priority_queue<Tweet, vector<Tweet>, compare> minHeap;

        // add my tweets
        if (tweets.find(userId) != tweets.end())
        {
            for (auto tweet : tweets[userId])
            {
                minHeap.push(tweet);
                if (minHeap.size() > 10)
                    minHeap.pop(); // remove older tweets
            }
        }

        // add tweets from my followings
        if (following.find(userId) != following.end())
        {
            auto myFollowings = following[userId];
            for (auto followeeId : myFollowings)
            {
                if (tweets.find(followeeId) != tweets.end())
                {
                    for (auto tweet : tweets[followeeId])
                    {
                        minHeap.push(tweet);
                        if (minHeap.size() > 10)
                        {
                            minHeap.pop();
                        }
                    }
                }
            }
        }
        // now i'll tweets top 10 most recent(oldest at top of minHeap) tweets from userId
        // and from the followings of userId
        vector<int> newsFeedTweets;
        while (!minHeap.empty())
        {
            auto [tweetId, globalTime] = minHeap.top();
            minHeap.pop();
            newsFeedTweets.push_back(tweetId);
        }
        reverse(newsFeedTweets.begin(), newsFeedTweets.end());
        return newsFeedTweets;
    }

    void follow(int followerId, int followeeId)
    {
        if (followerId == followeeId)
            return; // i can't follow myself
        following[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId)
    {
        if (following.find(followerId) != following.end())
            following[followerId].erase(followeeId);
    }
};