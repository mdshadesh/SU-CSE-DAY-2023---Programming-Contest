story_points = list(map(int, input().split()))

eligible_weeks = 0

for points in story_points:
    if points >= 10:
        eligible_weeks += 1

print(eligible_weeks)
