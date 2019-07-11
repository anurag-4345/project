var app = angular.module('my_mod' , []);
app.controller('prod', function ($scope) {
    $scope.products = [
        { name:"sumsung",price:12000,active:false},
        { name:"iphone",price:120000,active:false},
        { name:"nokia",price:18000,active:false},
        { name:"vivo",price:21000,active:false},
        { name:"opp",price:11000,active:false},
        { name:"gionee",price:21000,active:false}
    ]
$scope.addToList  = function (p) {
    p.active = !p.active;
}
$scope.total = function(){
    var total = 0;
 angular.forEach($scope.products, function (p) {
    if(p.active == true)
    {total = total + p.price;}
  });
return total;
}
});
//todo html controller
app.controller('todo',function ($scope) {
    $scope.details_todo = [
        //done "task 1","task 2","task 3","task 4","task 5"
    
        {task:'coding', details:"nodejs and angularjs" },
        {task:'testing', details:"tools" },
        {task:'analysis', details:"page view" },
        {task:'reuseiablet', details:"same module" },
        {task:'dynamic', details:"DMA" },
    ];
    //$scope.Task = "";
/* done
    $scope.addtask = function () {
    //$scope.details_todo.name.push($scope.Task);   
    $scope.details_todo.push($scope.values);
    $scope.values="";
    };
    $scope.delete = function (index) {
        $scope.details_todo.splice(index,1);
    }
*/
$scope.nameH = " ";
$scope.addtask = function(index){
    /*
    $scope.details_todo[index].push({task:$scope.nameH});
    $scope.nameH = "";
    $scope.details_todo[index].push({details:$scope.detailsH});
    $scope.details=""; */
    if(index){
        $scope.obj1 = {
            task:nameH
        };
        this.details_todo.push(obj1);
        this.nameH = '';
      
    }
    if(index){
        $scope.obj2 = {
            task:detailsH
        };
        this.details_todo.push(obj2);
        this.detailsH = '';
    }
}
$scope.delete =function (index) {
    $scope.details_todo.splice(index,1);
}
});

/*
var points = [40, 100, 1, 5, 25, 10];
points.sort(function(a, b){return a - b});
points.reverse();
points.sort(function(a, b){return 0.5 - Math.random()});
console.log(points);
*/