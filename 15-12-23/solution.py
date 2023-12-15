class Solution(object):
    def destCity(self, paths):
        A = set()
        B = set()
        for source,destination in paths:
            A.add(source)
            B.add(destination)

        return "".join(list(B.difference(A)))
        