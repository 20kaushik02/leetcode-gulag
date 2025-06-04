def hIndex(self, citations: list[int]) -> int:
    cs = sorted(citations, reverse=True)
    h = 0
    for x in cs:
        if x > h:
            h += 1
        else:
            break
    return h
