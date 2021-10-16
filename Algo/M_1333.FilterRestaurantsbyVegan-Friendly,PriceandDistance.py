import operator

class Solution(object):
    def filterRestaurants(self, restaurants, veganFriendly, maxPrice, maxDistance):
        def filterFn(x):
            if veganFriendly and not x[2]:
                return False
            return x[3] <= maxPrice and x[4] <= maxDistance

        result = list(filter(filterFn, restaurants))
        result = sorted(result, key=operator.itemgetter(1, 0), reverse=True)
        return list(map(lambda x: x[0], result))

restaurants =[[1,4,1,40,10],[2,8,0,50,5],[3,8,1,30,4],[4,10,0,10,3],[5,1,1,15,1]]
veganFriendly = 0
maxPrice = 30
maxDistance = 3

print(Solution().filterRestaurants(restaurants, veganFriendly, maxPrice, maxDistance))
