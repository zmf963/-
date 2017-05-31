//数据结构：是相互之间存在一种或多种特定关系的数据元素的集合。
//  数据：描述客观事物的符号，是计算机中可以操作的对象，是能被计算机识别，并输入给计算机处理的符号集合。
    //数据元素：是组成数据的、有一定意义的基本单位，在计算机中通常作为整体处理。也被称为记录。
    //数据项：一个数据元素可以由若干个数据项组成。
            //  数据项是数据不可分割的最小单位。
    //数据对象：是性质相同的数据元素的集合，是数据的子集。

//逻辑结构：是指把数据对象中数据元素之间的相互关系。
    // 集合结构：集合结构中的数据元素除了同属于一个集合外，它们之间没有其他关系。
    // 线性结构：线性结构中数据之间是一对一的关系。
    // 树形结构：树形结构中的数据元素之间存在一种一对多的层次关系。
    // 图形结构：图形结构的数据元素是多对多的关系。
//物理结构（存储结构）：是指数据的逻辑结构在计算机中存储形式。
    // 顺序存储结构:是把数据元素存放在地址连续的存储单元里，其数据间的逻辑关系和物理关系是一致的。
    // 链式存储结构：是把数据元素存放在任意的存储单元里，这组存储单元可以是连续的，也可以是不连续的。

// 抽象数据类型
    // 数据类型：是指一组性质相同的指的集合及定义在此集合上的一些操作的总称。
    // 在c语言中，按照取值的不同，数据类型可以分成两类：
    //     原子类型：是不可以在分解的基本类型，包括整形、实型、字符型等。
    //     结构类型：由若干个类型组合而成。是可以在分解的。例如：整形数据是由若干个整形数据组成的。
    // 抽象是指抽取出食物具有的普遍性的本质。抽出问题的特征而忽略非本质的细节，是对具体事物的一个概括。
    // 抽象是一种思考问题的方式，它隐藏了繁杂的细节，只保留实现目标所必需的信息。

    // 抽象数据类型（Abstract Date Type, ADT）：是指一个数学模型及定义在该模型上的一组操作。
    //         抽象数据类型的定义仅取决于它的一组逻辑特性，而与其在计算机内部如何表示和实现无关。
    //         “抽象”的意义在于数据类型的数学抽象特性。
    //         抽象数据类型体现了程序设计中间问题分解、抽象和信息隐藏的特性。                                               

/*        ADT 抽象数据类型名
        Data
            数据元素之间逻辑关系的定义
        Operation
            操作1
                初始条件
                操作结果描述
            操作2
                ......
            操作n
                ......
        endADT
        */


算法：
    算法是解决特定问题求解步骤的描述，在计算机中表现为指令的有限序列，并且每条指令表示一个或多个操作。
    算法的特性：具有零个或多个输入。
               至少有一个或多个输出。
               有穷性
               确定性：算法的每一步骤都具有确定的含义，不会出现二义性。
               可行性：算法的每一步都必需是可行的，也就是说，没一步都能够通过执行有限的次数完成。

    算法设计的要求
            正确性：算法的正确性是指算法至少应该具有输入、输出、和加工处理无歧义性、能正确的反应问题的需求、能够得到
                    正确答案。
            可读性：算法设计的另一目的是为了便于阅读、理解和交流。
            健壮性：当输入数据不合法时，算法也能做出相关处理，而不是产生异常或莫名其妙的结果。
            时间效率高和存储量低：

    算法效率的度量方法
            事后统计方法：
            事前分析估算方法：在计算机编制前，依据统计方法对算法进行估算。


            函数的渐近增长：给定两个函数f（n）和g（n），如果存在一个整数N,使得对于所有的n>N,f(n)总是比g(n)大，那么，
            我们说f(n)的增长渐快于g（n）。
            
            判断一个算法的效率时，函数中的常数和其他次要项常常可以忽略，而更应该关注主项（最高阶项）的阶数。
    
    算法时间复杂度
            定义：在进行算法分析时，语句总的执行次数T(n)是关于问题规模n的函数，进而分析T(n)随n的变化情况并确定T(n)
                 的数量级。算法的时间复杂度，也就是算法的时间度量。记作：T(n)=O(f(n))。它表示随着问题规模n的增大，
                 算法执行时间的增长率和f(n)的增长率相同，称作算法的渐近时间复杂度，简称为时间复杂度。其中f(n)是问题
                 规模n的某个函数。
                 
            大O记法：O()      O(1)常数阶   与问题的大小（n的多少）无关，执行时间恒定的算法
                             O(logn)对数阶  
                             O(n)线性阶  
                             O(nlogn)阶
                             O(n^2)平方阶
                             O(n^3)立方阶
                             O(2^n)指数阶
                             O(n!)
                             O(n^n)
            一般情况下，随着n的增大，T(n)增长最慢的算法称为最优算法。

            推导大O阶：
                    1.用常数1取代运行时间中的所有加法常数。
                    2.在修改后的运行次数函数中，只保留最高阶项。
                    3.如果最高阶项存在且不是1，则去除与这个项相乘的常数。

            最坏情况与平均情况
    
    算法空间复杂度
            计算公式：S(n)=O(f(n)), 其中n为问题的规模，f(n)为语句关于n所占存储空间的函数。



线性表(List)
    定义：零个或多个数据元素的有限序列。
    线性表元素的个数n(n>=0)定义为线性表的长度，当n=0时，称为空表。
    在负载的线性表中，一个数据元素可以由若干个数据项组成。

    线性表的抽象数据类型
            ADT 线性表（List）
            Data
                线性表的数据对象集合为{a1, a2, ....., an},每个元素的类型均为DataType。其中，除第
            一个元素a1外，每一个元素有且只有一个直接前驱元素，除了最后一个元素an外，每一个元素有且
            只有一个直接后继元素。数据元素之间的关系是一对一的关系。
            Operation
                InitList(*L);       初始化操作，建立一个空的线性表L。
                ListRmpty(L);       若线性表为空，返回true，否则返回false。
                ClearList(*L);      将线性表清空。
                GetElem(L, i, *e);  将线性表L中的第i个位置元素值返回给e。
                LocateElem(L,e);    在线性表L中查找与给定值e相等的元素，如果查找成功，返回该元素在
                                    表中的序号表示成功；否则，返回0表示失败。
                ListInsert(*L, i, e);   在线性表L中的第i个位置插入新元素e。
                ListDelete(*L, i, *e);  删除线性表L中第i个位置元素，并用e返回其值。
                ListLength(L);          返回线性表L的元素个数。
            endADT

    线性表的顺序存储顺序存储结构


            定义：指的是用一段地址连续的存储单元依次存储线性表的数据元素。

            数组的长度是存放线性表的存储空间的长度，存储分配后这个量一般是不变的。
            线性表的长度是线性表中数据元素的个数，随着线性表插入和删除操作进行，这个量是变化的。
            在任意时刻，线性表的长度应该小于等于数组的长度。

            地址的计算方法
                    LOC表示获得存储位置的函数,c表示占用的存储单元
                    Loc(ai+1)=LOC(ai)+c

                    LOC(ai)=LOC(ai)+(i-1)*c

                    对于每个线性表位置的存取数据，都是相等的时间，对于存取时间性能为O(1),我们通常把
                                                        具有这一特点的存储结构称为随机存取结构。

            顺序存储结构的插入与删除
                获得元素操作GetElem
                    #define OK 1
                    #define ERROR 0
                    #define TRUE 1
                    #define FALSE 0
                    typedef int Status;
                    /*Status 是函数的类型，其值是函数借给状态代码，如OK等*/
                    /*初始条件：顺序线性表L已存在，l<=i<=ListLength(L)*/
                    /*操作结果：用e返回L中第i个数据元素的值*/
                    Status GetELem(SqList l, int i, ElemType *e)
                    {
                        if(L.length==0 || i<1 || i>L.lengrh)
                            return ERROR;
                        *e=L.data[i-1];
                        return OK;
                    }
                
                插入操作ListInsert
                    插入算法的思路：
                            如果插入位置不合理，抛出异常；
                            如果线性表程度大于等于数组长度，则抛出异常或动态增加容量；
                            从最后一个元素开始向前遍历到第i个位置，分别将它们都向后移动一个位置；
                            将要插入元素填入位置i处；
                            表长加1。
                    /*初始条件：顺序线性表L已存在，l<=i<=ListLength(L),*/
                    /*操作结果：在L中第i个位置之前插入新的数据元素e，L的长度增加1*/
                    Status ListInsert(SqList *L, int i, ElemType e)
                    {
                        int k;
                        if (L->lengrh==MAXSIZE)     //顺序线性表已经满
                            return ERROR;
                        if (i<1 || i>L->length+1)   //当i不在范围内时
                            return ERROR;
                        if (i<=L->length)           //若插入数据位置不在表尾
                        {
                            for (k=L->length-l; k>=i-1; k--)    //将要插入位置后数据元素向后移动一位
                                L->data[k+1]=L->data[k];
                        }
                        L->data[i-1]=e;     //将新元素插入
                        L->length++；
                        return OK;
                    }

                删除操作ListDelete
                    删除算法的思路：
                            如果删除位置不合理，抛出异常；
                            取出删除元素；
                            从删除元素位置开始遍历到最后一个元素位置，分别将它们都向前移动一个位置；
                            表长减1。
                    /*初始条件：顺序线性表L已存在，l<=i<=ListLength(L)*/
                    /*操作结果：删除L的第i个数据元素，并用e返回其值，L的长度减1*/
                    Status ListDelete(SqList *L,int i, ElemType *e)
                    {
                        int k;
                        if (L->length==0)       //如果表为空
                            return ERROR;
                        if (i<1 || i>L->length) //删除位置不正确
                            return ERROR;
                        *e=L->data[i-1];        
                        if (i<l->length)        //如果删除的不是最后位置
                        {
                            for(k=i; k<L->length; k++)
                                L->data[k-1]=L-<data[k];
                        }
                        L->length--;
                        return OK;
                    }
        
                线性表的顺序存储结构的优缺点
                    优点：无须为表示表中元素之间的逻辑关系而增加额外的存储空间
                         可以快速地存取表中任一位置的元素
                    缺点：插入和删除操作需要移动大量元素
                         当线性表长度变化比较大时，难以确定存储空间的容量
                         造成存储空间的“碎片”

    线性表的链式存储结构
        数据域
        指针域
        二者合称结点
        n个结点链结成一个链表，即为线性表的链式存储结构，因为此链表的每个结点中只包含一个指针域
                                                                 ，所以叫做单链表。
        链表中第一个结点的存储位置叫做头指针。
        线性链表的最后一个结点指针为“空”（NULL）。
        在单链表的第一个结点前附设一个结点，称为头结点。（其数据域可以不存储任何信息，也可以存储
                                 诸如线性表程度等附加消息，其指针域存储指向第一个结点的指针）
        头指针和头结点的异同：
                头指针：是指链表指向第一个结点的指针，若链表由头结点，则是指向头结点的指针
                        具有标志作用，所以常用头指针冠以链表的名字
                        无论链表是否为空，头指针均不为空。头指针是链表的必要元素
                头结点：是为了操作的统一和方便而设立的，放在第一元素的结点之前，其数据域一般无意义（
                                也可存放链表的长度）
                        有了头结点，对在第一元素结点前插入结点和删除第一结点，其操作与其它结点的操作就
                                        一致了
                        头结点不一定是链表必需要素
                        
        若线性表为空表，则头结点的指针域为“空”

        /*线性表的单链表存储结构*/
        typedef struct Node
        {
            ElemType data;
            struct Node *next;
        } Node;
        typedef struct Node *LinkList;      /*定义LinkList*/
        结点由存放数据元素的数据域存放后继结点地址的指针域组成。
    单链表的读取
        获得链表第i个数据的算法思路：
                1.声明一个结点p指向链表第一个结点，初始化j从1开始；
                2.当j<i时，就遍历链表，让p的指针向后移动，不断指向下一结点，j累加1；
                3.若到链表末尾p为空，则说明第i个元素不存在；
                4.否则查找成功，返回结点p的数据。
        
        /*初始条件：顺序线性表L已存在，l<=i<=ListLength(L) */
        /*操作结果：用e返回L中第i个数据元素的值*/
        Status GetElem(LinkList L, int i, ElemType *e)
        {
            int j = 1;      //j为计数器
            LinkList p = p->next;     //p指向链表L的第一个结点
            
            while (p && j<i)        //p不为空或者计数器j还没有等于i时循环继续
            {
                p = p->next;        //指针p指向下一个结点
                ++j;                //计数器加一
            }
            if ( !p || j>i )        //第i个元素不存在
                return ERROR;
            *e = p->data;           //取第i个元素的数据
            return OK;
        }

    单链表的插入
        单链表第i个数据插入结点的算法思路：
                1.声明一结点p指向链表第一个结点，初始化j从1开始；
                2.当j<i时，就遍历链表让p的指针向后移动，不断指向下一结点，j累加1；
                3.若到链表末尾p为空，则说明第i个元素不存在；
                4.否则查找成功，在系统中生产一个空结点s；
                5.将数据元素e赋值给s->data;
                6.单链表的插入标准语句s->next=p->next; p->next=s;
                7.返回成功。
        /*初始条件：顺序线性表L已存在，1<=i<=ListLength(L) */
        /*操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1 */
        Status ListInsert(LinkList *L, int i, ElemType e)
        {
            int j = 1;
            LinkList p = *L, s;
            while (p && j < i)      //寻找第i个结点
            {
                p = p->next;
                ++j;
            }
            if ( !p || j > i)       //p为空或
                return ERROR；       //第i个元素不存在
            s = (LinkList)malloc(sizeof(Node));     //生产新结点s
            s->data = e;            
            s->next = p->next;      //将p的后继结点赋值给s的后继 
            p->next = s;            //将s赋值给p的后继
            return OK;
        }

    单链表的删除
        单链表第i个数据元素删除结点的算法思路：
                1.声明一结点p指针链表第一个结点，初始化j从1开始；
                2.当j<i时，就遍历链表，让p的指针向后移动，不断指向下一个结点，j累加1；
                3.若到链表末尾p为空，则说明第i个元素不存在；
                4.否则查找成功，将欲删除的结点p->next赋值给q；
                5.单链表的删除标准语句p->next=q->next;
                6.将q结点中的数据赋值给e，作为返回；
                7.释放q结点；
                8.返回成功。
        /*初始条件：顺序线性表L已存在，1<=i<=ListLength(L) */
        /*操作结果：删除L的第i个数据元素，并用e返回其值，L的长度减1 */
        Status ListDelete(LinkList *L, int i, ElemType *e)
        {
            int j = 1;
            LinkList p = *L, q;
            while (p->next && j < i)        //遍历寻找第i个元素
            {
                p = p->next;
                ++j;
            }
            if ( !(p->next) || j>i)         //第i个元素不存在
                return ERROR;
            q = p->next;                    
            p->next = q->next;              //将q的后继赋值给p的后继
            *e = q->data;                   //将q结点中的数据给e
            free(q);                        //让系统回收结点，释放内存
            return OK;
        }
            
    单链表的整表创建
        单链表整表创建的算法思路
                1.声明一结点p和计数器变量i；
                2.初始化一空链表L;
                3.让L的头结点的指针指向NULL，即建立一个带头结点的单链表；
                4.循环:
                        生成一新结点赋值给p；
                        随机生成一数字赋值给p的数据域p->data;
                        将p插入到头结点与前一新结点之间。
        /* 随机产生n个元素的值，建立带表头结点的单链线性表L（头插法） */
        void CreatListHead(LinkList *L, int n)
        {
            LinkList p;
            srand(time(0));         //初始化随机数种子
            *L = (LinkList)malloc(sizeof(Node));
            (*L)->next = NULL;
            for (int i = 0; i < n; i++)
            {
                p = (LinkList)malloc(sizeof(Node));     //生成新结点
                p->data = rand()%100 + 1;   //随机生成100以内的数字
                p->next = (*L)->next;
                (*L)->next = p;         //插入到表头
            } 
        }

        /* 随机产生n个元素的值，建立带表头结点的单链线性表L（尾插法） */
        void CreateListTail(LinkList *L, int n)
        {
            LinkList p,r;
            srand(time(0));         //初始化随机数种子
            *L = (LinkList)malloc(sizeof(Node));    //为整个线性表
            r = *L;         //r为指向尾部的结点
            for (int i=0; i<n; i++)
            {
                p = (Node *)malloc(sizeof(Node));       //生成新结点
                p->data = rand()%100 + 1;
                p->next = p;        // 将表尾终端结点的指针指向新结点
                r = p;      //将当前的新结点定义为表尾终端结点
            }
            r->next = NULL;             //表示当前链表结束
        }

    单链表的整表删除
        单链表的整表删除的；算法思路：  
                1.声明一结点p和q；
                2.将第一个结点赋值给p;
                3.循环：
                        将下一结点赋值给q;
                        释放p；
                        就 q 赋值给p。
        /*初始条件：顺序线性表L已存在，操作结果：将L重置为空表 */
        Status ClearList(LinkList *L)
        {
            LinkList p, q;
            p = (*L)->next;     //p指向第一个结点
            while(p)
            {
                q = p->next;
                free(q);
                p = q;
            }
            (*L)->next = NULL;      //头结点指针域为空
            return OK；
        }        
    单链表结构与顺序存储结构优缺点
        存储分配方式： 
                顺序存储结构用一段连续的存储单元依次存储线性表的数据元素
                单链表采用链式存储结构，用一组任意的存储单元存放线性表的元素
        时间性能：
                查找：顺序存储结构O(1)  单链表O(n)
                插入和删除：
                        顺序存储结构需要平均移动表长一半的元素，时间为O(n)
                        单链表在线出某位置的指针后，插入和删除时间仅为O(1)
                空间性能：
                        顺序存储结构需要预分配存储空间，分大了，浪费，分小了易发生上溢
                        单链表不需要分配存储空间，只要有就可以分配，元素个数也不受限制

    
    静态链表
        定义：我们把这种用数组描述的链表叫做静态链表。（游标实现法）
        /* 线性表的静态链表存储结构*/
        #define MAXSIZE 1000        //假设链表的最大长度是1000
        typedef struct
        {
            ElemType data;
            int cur;    //游标Cursor，为0时表示无指向
        }Component,StaticLinkList[MAXSIZE];
            ps:
                我们对数组第一个和最后一个元素作为特殊元素处理，不存数据。
                数组的第一个元素（下标为0的元素）的cur存放备用链表的第一个结点的下标；
                数组的最后一个元素的cur则存放第一个有数值的元素的下标，相当于单链表中
                的头结点作用；当链表为空时，则为0.

                备用链表：未被使用的数组元素

        /*将一维数组space中各分量链成一组备用链表 */
        /*space[0].cur为头指针，“0”表示空指针 */
        Status InitList(StaticLinkList space)
        {
            for (int i = 0; i < MAXSIZE-1; i++)
                space[i].cur = i + 1;
            space[MAXSIZE-1].cur = 0;       //目前静态链表为空，最后一个元素的cur为0
            return OK;
        }

        静态链表的插入操作
            /*若备用空间链表非空，则返回分配的结点下标，否则返回0 */
            int Malloc_SLL(StaticLinkList space)
            {
                int i = space[0].cur;   //当前数组第一个元素的cur存的值，就是要
                                        //返回的第一个备用空间的下标
                if (space[0].cur)
                    space[0].cur = space[i].cur;
                        //由于要拿出一个分量来使用，所以我们就得把它的下一个分量用来备用
                return i;
            }

            /* 在L中第i个元素之前插入新的数据元素e */
            Status ListInsert(StaticLinkList L, int i, ElemType e)
            {
                int k = MAX_SIZE - 1;       //注意k首先是最后一个元素的下标
                if (i < 1 || i > ListLength(L) + 1)
                    return ERROR;
                int j = Malloc_SSL(L);
                if (j)
                {
                    L[j].data = e;      //将数据赋值给此分量的data
                    for(int l = 1; l <= i - 1; l++)     //找到第i个元素之前的位置
                        k = L[k].cur;
                    L[j].cur = L[k].cur;        //把第i个元素之前的cur赋值给新元素的cur
                    L[k].cur = j;       //把新元素的下标赋值给第i给元素之前的cur
                    return OK;
                }
                return ERROR;
            }

        静态链表的删除操作
            /* 删除在L中的第i个数据元素e */
            Status ListDelete (StaticLinkList L, int i)
            {
                if (i < 1 || i > ListLength(L) )
                    return ERROR;
                int k = MAX_SIZE - 1;
                for (int j = 1; j <= i - 1; j++)
                    k = L[k].cur;
                j = L[k].cur;
                L[k].cur = L[j].cur;
                Free_SSL(L, j);
                return OK;
            }
            /* 将下标为k的空闲结点回收到备用链表 */
            void Free_SSL(StaticLinkList space, int k)
            {
                space[k].cur = space[0].cur;    //把第一个元素的cur值赋值给要删除元素的cur。
                space[0].cur = k;   //第一个元素的cur的值改为要删除的的分量的cur。
            }

                
            /* 初始条件：静态链表L已存在。操作结果：返回L中数据元素个数 */
            int ListLength(StaticLinkList L)
            {
                int j = 0;
                int i = L[MAXSIZE-1].cur;
                while(i)
                {
                    i = L[i].cur;
                    j++;
                }
                return j;
            }


        静态表的优缺点：
            优点：
                    在插入和删除操作时，只要修改游标，不需要移动元素，从而改进了在顺序存储结构中的插入
                    和删除操作需要移动大量元素的缺点
            缺点：
                    没有解决连续存储分配带来的表长难以确定的问题
                    失去了顺序存储结构随机存取的特性



    循环链表
        定义：将单链表中终点结点的指针端由空指针改为指向头结点，就使整个单链表形成一个环，这种头尾相接的
              单链表称为单循环链表，简称循环链表（circular linked lisr）。
        
              p = rearA->next;
              rearA->next=rearB->next->next;
              rearB->next = p;
              free(p);
    
    双向链表（double linked list）
            双向链表是在单链表的每个结点中，在设置一个指向其前驱结点的指针域。
        /* 线性表的双向链表存储结构 */
        typedef struct DuNode
        {
            ElemType data;
            struct DuNode *prior;
            struct DuNode *next;
        }DulNode, *DuLinkList;

        将s插入到P和P->next之间
        s->prior = p;
        s->next = p->next;
        p->next -> prior = s;
        p-next = s;
        删除结点p
        p->prior->next = p->next;
        p->next->prior = p->prior;
        free(p);

    
栈与队列
    栈是限定仅在表尾进行插入和删除操作的线性表。
    队列是只允许在一端进行插入操作、而在另一端进行深处操作的线性表。
    
    我们把允许插入和删除的一端称为栈顶（top），另一端称为栈底（bottom），
    不含任何数据元素的栈称为空栈。栈又称先进后出（Last In First Out）的线性表，
    简称LIFO结构。
    栈的插入操作，叫做进栈，压栈、入栈。
    栈的删除操作，叫做出栈，弹栈。

    栈的抽象数据结构
    ADT 栈(stack)
    Data
        同线性表。元素具有相同的类型，相邻元素具有前驱和后继关系。
    Operation
        InitStack(*s):初始化操作，建立一个空栈。
        DestroyStack(*s):若栈存在，则销毁他。
        ClearStack(*s):将栈清空。
        StackEmpty(s):若栈为空，则返回true，否则返回false。
        GetTop(S, *s):若栈存在且非空，用e返回S的栈顶元素。
        Push(*S, e):若栈s存在，插入元素e到栈s中并成为栈顶元素。
        Pop(*s, e):删除栈S中栈顶元素，并用e返回其值。
        StackLength(S):返回栈S的元素个数。
    endADT

    栈的顺序存储结构
    typedef in SElemType;   //SElemType类型根据实际情况而定，这里假设为int
    typedef struct
    {
        SElemType data[MAXSIZE];
        int top;        //用于栈顶指针
    }SqStack;

    进栈
    /* 插入元素e为新的栈顶元素 */
    Status Push(SqStack *S, SElemType e)
    {
        if (S->top == MAXSIZE-1)    //栈满
        {
            return ERROR;
        }
        S->top++;       //栈顶指针加一
        S->data[S->top] = e;    //将新插入的元素赋值给栈顶空间
        return Ok;
    }
    出栈
    /*若栈不空，则删除s的栈顶元素，用e返回其值，并返回OK；否则返回ERROR*/
    Status Pop(SqStack *S, SElemType *e)
    {
        if(S->top == -1)
            return ERROR;
        *e = S->data[S->top];
        S->top--;
        return OK;
    }

    /*两栈共享空间的结构*/
    typedef struct
    {
        SElemType data[MAXSIZE];
        int top1;
        int top2;
    }SqDoubleStack;

    /*插入元素e为新的栈顶元素*/
    Status Push(SqDoubleStack *S, SElemType e, int stackNumber)
    {
        if (S->top1+1 == S->top2)
            return ERROR;
        if (stackNumber == 1)
            S->data[++S->top1] = e; //若栈1则先top1+1后给数组元素赋值
        else if (stackNumber == 2)
            S->data[--S->top2] = e; //若栈2则先top2-1后给数组元素赋值
        return OK;
    }
    /*若栈不为空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR*/
    Status Pop(SqDoubleStack *S, SElemType *e, int stackNumber)
    {
        if (stackNumber == 1)
        {
            if (S->top1 == -1)
                return ERROR;   //栈一是空栈，溢出
            *e = S->data[S->top1--];    //栈1的元素出栈
        }
        if (stackNumber == 2)
        {
            if (S->top2 == MAXSIZE)
                return ERROR;
            *e = S->data[S->top2++]     //栈2元素出栈
        }
        return OK;
    }


    栈的链式存储结构
    typedef struct StackNode
    {
        SElemTypedata data;
        struct StackNode *next;
    }StackNode, *LinkStackPtr;

    typedef struct LinkStack
    {
        LinkStackPtr top;
        int count;
    }LinkStack;

    /*插入元素e为新的栈顶元素*/
    Status Push (LinkStack *S, SElemType e)
    {
        LinkStackPtr s= (LinkStackPtr)malloc(sizeof(StackNode));
        s->data = e;    
        s->next = S->top;   //把当前的栈顶元素赋值给新结点的直接后继
        S->top = s;     //将新结点s赋值给栈顶指针
        S->count++;
        return  OK;
    }
    /*若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR*/
    Status Pop(LinkStack *S, SElemType *e)
    {
        LinkStackPtr p;
        if(StackEmpty(*s))
            return ERROR;
        *e = S->top->data;
        p=S->top;   //将栈顶结点赋值给p
        S->top = S->top->next;  //使栈顶指针下移一位，指向后一结点
        free(p);
        S->count--;
        return  OK;
    }


    斐波那契数列
    后缀表达式 931-3*+102/+
        规则：从左到右遍历表达式的每个数字和符号，遇到数字就进栈，遇到事符号，就将处于
             栈顶的两个数字出栈，进行运算，运算结果进栈，一直到最终获得结果。
    中缀表达式 9+（3-1）*3+10/2


队列（queue）
    定义：队列是只允许在一端进行插入操作，而在另一端进行删除操作的线性表。
    队列是一种先进先出（First In First Out）的线性表，简称FIFO。
    允许插入的一端称为队尾，允许删除的一端称为对头。
    队列抽象数据类型
    ADT 队列（Queue）
    Data
        同线性表。元素具有相同的类型，相邻元素具有前驱和后继关系。
    Operation
        InitQueue(*Q):初始化操作，建立一个空队列。
        DestroyQueue(*Q):若队列Q存在，则销毁它。
        ClearQueue(*Q):将队列清空。
        QueueEmpty(Q):若队列Q为空，返回true，否则返回false。
        GetHead(Q, *e):若队列Q存在且非空，用e返回队列Q的队头元素。
        EnQueue(*Q, e):若队列Q存在，插入新元素e到队列Q中并成为队尾元素。
        DeQueue(*Q, *e):删除队列Q中队头元素，并用e返回其值。
        QueueLength(Q):返回队列Q的元素个数。
    endADT

    队列顺序存储
    循环队列：我们把队列的这种头尾相接的顺序存储结构称为循环队列。
    typedef int QElemType;  //QElemType类型根据实际情况而定，这里假设为int
    typedef struct
    {
        QElemType data[MAXSIZE];
        int front;  //头指针
        int rear;   //尾指针
    }SqQueue;

    //初始化一个空队列
    Status InitQueue(SqQueue)
    {
        Q->front = 0;
        Q->rear = 0;
        return OK;
    }
    //循环队列求队列长度
    //返回Q的元素个数，也就是队列的当前长度
    int QueueLength(SqQueue Q)
    {
        return (Q.rear-Q.front+MAXSIZE)%MAXSIZE;
    }
    //入队
    //若队列未满，则插入元素e为Q新的队列元素
    Status EnQueue(SqQueue *Q, QElemType e)
    {
        if((Q->rear+1)%MAXSIZE == Q->front)
           return ERROR;   //队列满返回ERROR
        Q->data[Q->rear] = e;
        Q->rear = (Q->rear+1)%MAXSIZE;  //rear指针后移一位，若到最后则转到数组头部
        return OK；
    }
    //出队
    //若队列不空，则删除Q中对头元素，用e返回其值
    Status DeQueue(SqQueue *Q, QElemType *e)
    {
        if (Q->front == Q->rear)
            return ERROR;
        *e = Q->data[Q->front];
        Q->front = (Q->front + 1)%MAXSIZE;
        return OK;
    }

    队列的链式存储结构
        其实就是线性表的单链表，只不过它只能尾进头出而异，我们把它简称为链队列。
        队头指针指向链队列的头结点
        队尾指针指向终端结点
        空队列时，front和rear都指向头结点
        
    链队列的结构为：
    typedef int QElemType;  //QElemType类型根据实际情况而定，这里假设为int
    typedef struct QNode   //结点结构、
    {
        QElemType data;
        struct QNode *next;
    }QNode, *QueuePtr;

    typedef struct      //队列的链表结构
    {
        QueuePtr front, rear;   //队头队尾指针
    }LinkQueue;

    //入队
    //插入元素e为Q的新的队尾元素
    Status EnQueue(LinkQueue *Q, QElemType e)
    {
        QueuePtr s=(QueuePtr)malloc(sizeof(QNode));
        if(!s)
            exit(OVERFLOW);
        s->data = e;
        s->next = NULL;
        Q->rear->next = s;  //把拥有元素e新结点s赋值给原队尾结点的后继
        Q->rear = s;    //把当前的s设置为队尾结点，rear指向s
        return OK;
    }
    //出队
    //若队列不空，则删除Q的队头元素，用e返回其值，并返回OK，否则返回ERROR
    Status DeQueue(LinkQueue *Q, QElemType *e)
    {
        QueuePtr p;
        if(Q->front == Q->rear)
            return ERROR;
        p=Q->front->next;   //将欲删除的队头结点暂存给p
        *e=p->data;     //将欲深处的队头结点的值赋值给e
        Q->front->next=p->next;    //将原队头结点后继p->next赋值给头结点后继
        if(Q->rar==p)          //若队头是队尾，则删除后将rear指向头结点
            Q->rear=Q->front;
        free(p);
        return OK;
    }



串(string)
    定义：是由零个或多个字符组成的有限序列，又名叫字符串。
    一般记为 s="a1a2.....an"(n>=0)
    零给字符的串称为空串null string

    串的抽象数据类型
    ADT 串（string）
    Data
        串中元素仅由一个字符组成，相邻元素具有前驱和后继关系。
    Operation
        StrAssign(T, *chars):生成一个其值党羽字符串常量chars的串T。
        StrCopy(T, S):串S存在，由串S赋值得到串T。
        ClearString(S):串S存在，将串清空。
        StingEmpty(S)：若串S为空，返回true，否则返回false。
        StrLength(S)：返回串S的元素个数，即是串的长度。
        StrCompars(S, T)：若S>T,返回值大于0，；若S=T返回0；若S<T，返回值小于0。
        Concat(T, S1, S2): 用T返回由S1和S2联接而成的新串。
        SubString(Sub, S, pos, len)：串S存在，1<=pos<=StrLength(S),
                            且0<=len<=StrLengrh(S)-pos+1,用Sub返回串
                            S的第pos个字符起长度为len的子串。
        Index(S, T, pos)：串S、T存在，T是非空串，1<=pos<=StrLength(s)。
                            若主串S中存在和串T相同的子串，则返回它则主串S
                            中第pos个字符之后第一次出现的位置，否则返回0.
        Replace(S,T,V): 串S、T和V存在，T是非空串。用V替换主串S中出现的所有与T相等的不重叠的子串。
        StrInsert(S, pos, T):串S和T存在，1<=pos<=StrLength(S)+1.
                            在串S的第pos个字符之前插入串T。
        StrDelete(S, pos, len): 串S存在，1<=pos<=StrLength(S)-len+1。
    endADT

    //T为空串。若主串S中第pos个字符之后存在与T相等的子串
    //则返回第一个这样的字串在S中位置，否则返回0
    int Index(String S, String T, int pos)
    {
        String sub;
        if(pos > 0)
        {
          int n = StrLength(S);
          int m = StrLength(T);
          int i = pos;
          while (i <= n-m+1)
          {
              SubString(sub, S, i, m);
                        //取主串第i个位置
                        //长度与T相等子串给sub
              if(StrCompare(sub, T) != 0) //如果两串不相等
                   ++i；
              else
                  return i;
          }
        }
        return 0;  //若无子串与T相等，返回0        
    }

    串的顺序存储结构
    串的链式存储结构

    朴素的模式匹配算法
        子串的定位操作通常称作串的模式匹配。
    
    //返回子串T在主串中第pos个字符之后的位置。若不存在，则返回值为0
    //T非空，1<=pos<=StrLength(S).
    int Index(String S, String T, int pos)
    {
        int i = pos;    //i用于主串S中当前位置下标，若pos不为1
                        //则从pos位置开始匹配
        int j = 1;      //j用于子串T中当前位置下标值
        while(i <= S[0] && j <= T[0] )  //若i小于S长度且j小于T的长度时循环
        {
            if (S[i] == T[j])   //两个字符相等则继续
            {
                ++i;
                ++j;
            }
            else    //指针后退重新开始匹配
            {
                i = i - j + 2;  //i退回到上次匹配首位的下一位
                j = 1;
            }
        } 
        if (j > T[0])
            return i-T[0];
        else
            return 0;
    }
        最好的情况：时间复杂度为O（1）
        平均：O(m+n)
        最坏：O((n-m+1)*m)

    KMP模式匹配算法
        next[j] = {
            0, 当j=1时
            MAX{k | 1<k<j,且‘p1 ... k-1’=‘pj-k+1 ... pj-1’}当此集合不为空时
            1，其他情况
        }
        next数组值推导
                前缀和后缀n个字符相等k值就是n+1
        //通过计算返回子串T的next数组
        void get_next(String T, int *next)
        {
            int i = 1;
            int j = 0;
            next[1] = 0;
            while (i < T[0])    //此处T[0]表示T的长度
            {
                if(j==0 || T[i] == T[j])    //T[i]表示后缀的单个字符
                                            //T[j]表示前缀的单个字符

                {
                    ++i;
                    ++j;
                    next[i] = j;
                }
                else
                    j = next[j];    //若字符不相同，则j值回溯
            }
        }
        //返回子串T在主串S中第pos字符之后的位置。若不存在，则函数返回值为0。
        //T非空，1<=pos<=StrLength(S)。
        int Index_KMP(String S, String T, int pos)
        {
            int i = pos;    //i用于主串S当前位置下标值，若pos不为1
                            //则从pos位置开始匹配
            int j = 1;      //j用于子串T中当前位置下标值
            int next[255];  //定义一next数组
            get_next(T, next);  //队串T作分析，得到next数组
            while (i <= S[0] && j <= T[0])  //若i小于S的长度且j小于T的长度时，
                                            //  循环继续
            {
                if(j == 0 || S[i] == T[i])  //两字符相等则继续，与朴素算法相比增加了j==0
                {
                    ++i;
                    ++j;
                }
                else        //指针后退重新开始匹配
                {
                    j = next[j];    //j退回合适的位置，i值不变
                }
                if (j > T[0])
                    return i - T[0];
                else
                    return 0;
            }
        }
        时间复杂度O(n+m)

        改进的kmp算法
        //求模式串T的next函数修正值并存入数组nextval
        void get_nextval(String T, int *nextval)
        {
            int i = 1;
            int j = 0;
            nextval[1] = 0;
            while (i<T[0])  //T[0]表示串T的长度
            {
                if(j==0 || T[i]==T[j]) //T[i]表示后缀的单个字符
                                        //T[j]表示前缀的单个字符
                {
                    ++i;
                    ++j;
                    if(T[i]!=T[j])   //若当前字符与前缀字符不同
                        nextval[i] = j;     //则当前的j为nextval在i位置的值
                    else 
                        nextval[i] = nextval[j];    //如果与当前前缀字符相同，则
                                    //将前缀字符的nextval值赋值给nextval在i位置的值
                }
                else
                    j = nextval[j];     若字符不相同，则j值回溯
            } 
        }


树（Tree）   
    定义：树是n（n>=0)个结点的有限集。n=0时称为空树。在任意一颗非空树中：有且仅有一个特定的称为根
        的结点；当n>1时，其余结点课分为m个（M>0）互不相交的有限集T1、T2、。。。Tm，其中每
        一个集合本身又是一颗树，并且称为根的子树（SubTree）
        
    树的结点包含一个数据元素及若干指向其子树的分支。
    结点拥有的子树称为结点的度（Degree）。
    度为0的结点称为叶结点（Leaf）或终端结点；
    度不为0的结点称为非终端结点或分支节点。
    除根节点之外，分支节点也称为内部结点。
    树的度是树内各节点的度的最大值

    结点的关系 Child Parent Sibling
    结点的层次Level   第一层第二层第三层
        树中结点的最大层次称为树的深度Depth或高度
    森林Forest是m（m>=0）棵互不相交的树的集合。对数中每个结点而言，其子树的集合即为森林。

    树的抽象数据类型
    ADT 树(tree)
    Data
        树是由一个根节点和若干棵子树构成。树中结点具有相同数据类型及层次关系。
    Operation
        InitTree(*T):构造空树T。
        DestroyTree(*T):销毁树T。
        CreateTree(*T, definition): 按definition中给出树的定义来构造树。
        ClearTree(*T): 若树T存在，则将树T清为空树。
        TreeEmpty(T): 若T为空树，返回true，否则返回false。
        TreeDepth(T)：返回T的深度。
        Root(T): 返回T的根结点。
        Value(T, cur_e): cur_e是树T中一个结点，返回此结点的值。
        Assign(T, cur_e, value): 给树T的结点cur_e赋值为value。
        Parent(T, cur_e):若cur_e是树T的非根节点，则返回它的双亲，否则返回空。
        LeftChild(T, cur_e):若cur_e树T的非叶节点，则返回ta的最左孩子，否则返回空。
        RightSibling(T, cur_e): 若cur_e有右兄弟，则返回它的右兄弟，否则返回空。
        InsertChild(*T, *p, i, c):其中p指向树T的某个节点，i为所指结点p的度加上1，
                非空树c与T不相交，操作结果为插入c为树T中p指结点第i棵子树。
        DeleteChild(*T, *p, i): 其中p指向树T的某个节点，i为所指结点p的度，操作结果为
                删除T中p所指结点的第i棵子树。
    endADT

    树的存储结构
        双亲表示法
        //树的双亲表示法结点结构定义
        #define MAX_TRUE_SIZE 100
        typedef int TElemType;  //树结点的数据类型，目前暂定为整型
        typedef struct PTNODE   //结点结构
        {
            TElemType data;     //结点数据
            int parent;    //双亲位置
        }PTNode；
        typedef struct  //树结构
        {
            PTNode nodes[MAX_TREE_SIZE];    //结点数组
            int r, n;   //根的位置和结点树
        }PTree；
        ps：
            由于根节点是没有双亲的所以我们约定根结点的位置域设置为-1
        
        //树的孩子表示法结构定义
        #define MAX_TREE_SIZE 100
        typedef struct CTNode  //       孩子结点
        {
            int child;
            struct CTNode *next;
        }*ChildPtr;
        typedef struct  //表头结构
        {
            TElemType data；
            ChildPtr firstchild;
        }CTBox;
        typedef struct  //树结构
        {
            CTbox nodes[MAX_TREE_SIZE]; //结点数组
            int r, n;
        }CTree;
        
        孩子兄弟表示法
            任意一棵树，它的结点的第一个孩子如果存在就是唯一的，它的右兴地如果存在也是
            唯一的。因此，我们设置两个指针，分别指向该结点的第一个孩子和此结点的兄弟。
        //树的孩子兄弟表示法结构定义
        typedef struct CSNode
        {
            TElemType data;
            struct CSNode *firstchild, *rightsib;
        }CSNode, *CSTree;           
            
二叉树
    定义：二叉树（Binary Tree）是n（n>=0)个结点的有限集合，该集合或者为空集(称为空
    二叉树)，或者由一二根结点和两棵互不相交的、分别称为根结点的左子树和右子树的二叉
    树组成。
    特点：二叉最多有两棵子树
        左子树和右子树是有顺序的，次序不能任意颠倒。
        即使树中某结点只有一棵子树，也要区分它是左子树还是右子树。
    二叉树具有五种基本形态：
                空二叉树 只有一个根结点 根结点只有左子树 根结点只有右子树 根结点有左右子树
    特殊的二叉树
        斜树：所有的结点都只有左子树的二叉树叫做左斜树。所有结点都只有右子树的二叉树叫做右斜树
        满二叉树：在一个二叉树中，如果所有分支节点都存在左子树和右子树，并且所有叶子都在
                    同一层上，这样的二叉树称为满二叉树。
        完全二叉树：对一棵具有n个结点的二叉树按层序编号，如果编号为i（1<=i<=n)的结点
                   与同样深度的满二叉树中编号为i的结点在二叉树中位置完全相同，则这棵
                   二叉树称为完全二叉树。
                   特点：叶子结点只能出现在最下两层。
                        最下层的叶子一定集中在左部连续位置。
                        倒数二层，若有叶子结点，一定都在右部连续位置。
                        如果结点度为1，则该结点只有左孩子，即不存在只有右子树的情况。
                        同样结点树的二叉树，完全二叉树的深度最小。
    二叉树性质
            在二叉树的第i层上最多有2^(i-1)个结点(i>=1)。
            深度为k的二叉树至多有2^k - 1个结点(k>=1)。
            对任何一棵二叉树T，如果其终端结点
    

    赫夫曼树及其应用
        从树中一个结点到另一个结点之间的分支构成两个结点之间的路径，路径上的分支数目称作路径长度。
        树的路径长度就是从树根到每一结点的路径长度之和。
        带权路径长度WPL最小的二叉树称作赫夫曼树。

图
    定义：图（Graph）是由顶点的有穷非空集合和顶点之间边的集合组成，通常表示为：G(V, E)，
          其中，G表示一个图，V是图G中顶点的集合，E是图G中边的集合。
          图中数据元素，我们称之为顶点(Vertex)。
          图中，任意两个顶点之间都有可能有关系，顶点之间的逻辑关系用边来表示，边合可以是空的。

          无向边：若顶点Vi到vj之间的边没有方向，则称这条边为无向边(Edge),用无序偶对(vi,vj)
                来表示。（)
                如果图中任意两个顶点之间的边都是无向边，则称该图为无向图(Undirected graphs)。
          有向边：若从顶点Vi到vj的边有方向，则称这条边为有向边，也称为弧(Arc)。<>
                 如果图中任意两个顶点之间的边都是有向边，则称该图为有向图。
          简单图：在图中，若不存在顶点到其自身的边，且同一边不重复出现，则称这样的图为简单图。
          无向完全图：在无向图中，如果任意两个顶点之间都存在边，则称该图为无向完全图。
          有向完全图：在限向图中，如果任意两个顶点之间都存在方向互为相反的两条弧，则称该图为有向完全图。
          有很少条边或弧的图称为稀疏图，反之称为稠密图。
          这种与图的边或弧相关的数叫做权Weight。带权的图称为网Network。
          顶点的度Degree是和该顶点相关联的边的数目，记为TD(v)。边数其实就是个顶点度数和的一半
          入度   出度

          路径的长度是路径上的边或弧的数目。
          每一个顶点到最后一个顶点相同的路径称为回路或环(Cycle)。
          序列中顶点不重复出现的路径称为简单路径。
          除了第一个顶点和最后一个顶点之外，其余顶点不重复出现的回路，称为简单回路或简单环。

          连通图
            在无向图G中，如果从顶点v到顶点v'有路径，则为v和v'是连通的。如果对于图中任意两个顶点vi、vj属于E，vi和vj都是连通的，
            则称g是连通图(ConnectedGraph)。
            无向图中的极大连通子图称为连通分量。
            在有向图G中，如果对于每一对vi、vj属于V、vi！=vj，从vi到vj和从vj到vi都存在路径，则称G是强连通图。有向图中的
            极大强连通子图称作有向图的强连通分量。
    图的抽象数据类型
    图的存储结构
        邻接矩阵存储的结构
            typedef char VertexType;
            typedef int EdageType;
            #define MAXVEX 100
            #define INFINITY 65535
            typedef struct
            {
                VertexType vexs[MAXVEX];    //顶点表
                EdageType arc[MAXVEX][MAXVEX];  //邻接矩阵，可看作表
                int numVertexes, numEdges;
            }MGraph;

            //建立无向网图的邻接矩阵表示
            void CreatMGraph(MGraph *G)
            {
                int i, j, k, w;
                printf("输入顶点数和边数：\n");
                scanf("%d,%d", &G->numVertexes, &G->numEdges);  //输入顶点数和边数。
                for (int i = 0; i < G->numVertexes; i++)
                    scanf(&G->vexs[i]);
                for (i = 0; i < G->numVertexes; i++)
                    for(j = 0; j < G->numVertexes; j++)
                        G->arc[i][j] = INFINITY;    //邻接矩阵初始化
                for (k = 0; k < G->numEdges; k++)   //读入numEdges条边，建立邻接矩阵
                {
                    printf("输入边(vi, vj)上的下标i，下标j和权w：\n");
                    scnaf("%d,%d,%d", &i, &j, &w);  //输入边(vi, vj)上的权
                    G->arc[i][j] = w;
                    G->arc[j][i] = G->arc[i][j];
                }
            }
            n个顶点和e条边的无向图的创建，时间复杂度为O(n+n^2+e),其中对邻接矩阵Garc的初始化耗费了O(n^2)的时间。
        邻接表：数组与链表相结合的存储方式称为邻接表(AdjacencyList)
    图的遍历
    最小生成树
    最短路径
    拓扑排序
    关键路径


查找
    概论
    顺序表查找
    有序表查找
    线性索引查找
    二叉排序树
    平衡二叉树(AVL树)
    多路查找树(B树)
    散列表查找(哈希表)概述
    散列函数的构造方法
    处理散列冲突的方法
    散列表查找实现


排序
    基本概念与分类
    冒泡排序
    简单选择排序
    直接插入排序
    希尔排序
    堆排序
    归并排序
    快速排序