### 1. git config

> 此命令可设置身份——Name和Email地址。并且每次提交时会使用此信息。

```
$ git config --global user.name "Your name"  
​
$ git config --global user.email "Your email"
```

### 2. git init

>此命令将创建一个空白的新存储库，然后你可以将源代码存储在此存储库中。
```
$ git init <your repository name>
```

### 3. git clone

>git clone命令将使用现有的存储库进行复制。git init和git clone之间有一个主要区别。在你需要在现有的存储库上进行复制时，使用git clone。git clone命令首先在内部使用git init命令，然后检出所有内容。
```
git clone <your project URL>
```

### 4. git add

>git add命令会把所有新的代码文件或修改后的文件添加到存储库中。
```
$ git add your_file_name  将单个文件添加到暂存区
$ git add *  将所有修改过的文件和新文件添加到暂存区
```

### 5. git commit

>git commit会将更改添加到本地存储库。
```
$ git commit -m "your useful commit message"
```

### 6. git status

>可以方便地查看有多少文件需要得到关注.此命令可以用来在git add和git commit之间查看状态。
```
$ git status
```

### 7. git branch

>可以使用git branch命令有效地管理分支
(i)列出所有分支：
```
$ git branch
```
(ii)创建新的分支：
```
$ git branch <branch_name>
```
(iii)删除分支：
```
$ git branch -d <branch_name>
```
(iv)查看远程分支：
```
$ git branch -r
```

### 8. git checkout

>此Git命令用于在分支之间进行切换。这是功能强大的git命令之一，堪称万能的瑞士军刀。
```
$ git checkout <branch_name>
```
此外，你也可以创建和检出到分支，用法如下
```
$ git checkout -b <your_new_branch_name>
```

### 9. git remote

>git remote命令就像边界，如果你需要与外界连接，则必须使用git remote命令。此命令会将你的本地存储库连接到远程。
```
$ git remote add <shortname> <url>
```

### 10. git push

>（借助git remote命令）与远程存储库连接之后，就需要将更改推送到存储库。

>（git push 后不加参数的时候，默认就是git push origin 当前的分支名，比如对本地的master分支执行git push，其实就是git push origin master，当然，如果远程仓库没有master这个分支的话，肯定会报错）
```
$ git push -u <short_name> <your_branch_name>
```

### 11. git fetch

>当需要下载其他团队成员的更改时，就得使用git fetch。

>此命令会下载有关提交、引用等的所有信息，因此你可以在将这些更改应用于本地存储库之前对其进行检查。

>将更新git remote 中所有的远程仓库(repository) 所包含分支的最新commit-id, 将其记录到.git/FETCH_HEAD文件中
```
$ git fetch
```

### 12. git pull

>git pull命令下载内容（而不是元数据），并立即用最新的内容更新本地存储库。

git pull操作其实是git fetch 与 git merge 两个命令的集合。
git pull  等效于先执行 git fetch origin 当前分支名, 再执行 git merge FETCH_HEAD.
```
$ git pull <remote_url>
```

### 13. git log

>可以看到所有之前的提交，并且最近的提交出现在最前面。
```
$ git log
```
默认情况下，它将显示当前已检出分支的所有提交，但是你可以强制通过所有选项来查看所有分支的所有提交。
```
$ git log --all
```

### 14. git shortlog

>会显示来自git log命令的摘要。如果你只对简短的摘要感兴趣，那么此命令就非常有用了。这个命令有助于查看谁处理了什么，因为它对作者及其提交进行了分组。
```
$ git shortlog
```

### 15. git show

>与git log相比，此命令将显示有关特定提交的详细信息。
```
$ git show <your_commit_hash>
```

### 16. git rm

>可以从索引和工作目录中删除跟踪的文件。(add之后的)
```
$ git rm <your_file_name>
```

### 17. git merge

>可帮助将来自两个分支的更改集成到单个分支中。
```
$ git merge <branch_name>
```
此命令会将<branch_name>合并到当前你选择的分支中。
### 18. git blame

>如果你需要逐行检查任意文件的内容，则需要使用git blame命令。它可以帮助确定是谁对文件进行了更改。
```
$ git blame <your_file_name>
```

### 19. git diff

>大多数情况下，在提交或推送之前，你需要比较两个git文件或分支。用这个命令就方便多了。
i）将工作目录与本地存储库进行比较：
```
$ git diff HEAD <filename>
```
ii）比较两个分支：
```
$ git diff <source branch> <target branch>
```

### 20. git mv

>重命名git文件。接受两个参数，源文件名和目标文件名。
```
$ git mv <old-file-name> <new-file-name>
```

### 21. git clean

>你可以使用git clean命令处理未跟踪的文件。可以使用此命令从工作目录中删除所有未跟踪的文件。如果要处理跟踪的文件，则需要使用git reset命令。
```
$ git clean
```

### 22. 

>
```

```

### 23. 

>
```

```

### 24. 

>
```

```
