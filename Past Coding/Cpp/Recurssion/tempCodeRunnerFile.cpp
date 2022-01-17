vector<string> next_perm(vector<string> vec, vector<string> res){
//     int len = vec.size();
//     int res_size = res.size();
//     if(len == 0){
//         for(int i = 0; i < res_size; i++){
//             cout<<res[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     for(int i=0; i<len; i++){
//         vector<string> vec_temp = vec;
//         vector<string> res_temp = res;
//         if(vec[i] == vec[i+1]){
//             while(vec[i] == vec[i+1]){
//                 res_temp.push_back(vec_temp[i]);
//                 i++;
//             }
//         }else{
//             res_temp.push_back(vec_temp[i]);
//         }
//         vec_temp.erase(vec_temp.begin()+i);
//         permutate(vec_temp, res_temp);

//     }
//     return;
// }