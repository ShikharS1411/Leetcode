//min dist for a permu can be at max n/2->(floor(n/2))
//i.e [1,n/2]
//most of the constructive permu probs (800-1400) will be made by doing some slight changes with n/2 thing 
//  so keep in mind :)
//for eg this prob on cf
/*
1754B - Kevin and Permutation
Let's prove that the minimum difference of consecutive elements is not greater than ⌊n/2⌋
. To do it, let's prove that larger value is not achievable. Consider element of a permutation with value ⌊n/2⌋+1
. It will have at least one adjacent element in the constructed permutation. And the maximum absolute difference of this element with the adjacent elements is at most ⌊n/2⌋
.

Now we will construct the permutation with the minimum absolute difference of consecutive elements equals to ⌊n/2⌋
. Assign x=⌊n/2+1⌋
. Now we can construct such permutation: x,1,x+1,2,x+2,…
. It's easy to see that the minimum absolute difference of consecutive elements equals to x−1
.
*/