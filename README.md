Приложение на C++ QtCreator тестно работающее с PostgreSQL и частично с CSS для отображения карт для поставщика с помощью API Яндекс Карт. 
Приложение включает в себя систему авторизации и 3 основных интерфейса: для администратора, кассира и поставщика. 
База данных включает в себя 11 таблиц: 
  Admin - данные об администраторах 
  Cashier - данные о кассирах 
  Supplier - данные о поставщиках
    //планируется добавить n-раз хэширующую функцию для паролей пользователей
  cashier_logs - данные о открытиях/закрытиях смены у кассира
  delivery - данные о доставках
  departments - отделения кофейн с адресами
  formula - рецепты каждой позиции из меню
  menu - позиции в меню и цены
  orders - данные о заказах
  products - список продуктов
  warehouse - количество продуктов на складе каждой кофейни
Интерфейс администратора включает в себя полный доступ к базе данных, а также инкапуслированные функции управления кофейними(рассчет прибыли (за все время, за промежуток), открытие/закрытие кофейн), сотрудниками(увольнение/найм, рассчет зарплаты).
Интерфейс кассира представляет собой кассу. Перед добавлением продукта в заказ происходит проверка на наличие нужного количества продуктов на складе конкретной кофейни, за которой закреплен кассир.
Интерфейс поставщика включает в себя информацию о недостающих продуктов в каждой кофейне, а также карту, которая показывает где находится выбранная кофейня.

An application in C++ QtCreator that works with PostgreSQL and partially with CSS to display maps for a supplier using the Yandex Maps API.
The application includes an authorization system and 3 main interfaces: for the administrator, cashier and supplier.
The database includes 11 tables:
  Admin - data on administrators
  Cashier - data on cashiers
  Supplier - data on suppliers
    //it is planned to add an n-time hashing function for user passwords
  cashier_logs - data on opening/closing of a cashier's shift
  delivery - data on deliveries
  departments - coffee shops with addresses
  formula - recipes for each menu item
  menu - menu items and prices
  orders - data on orders
  products - list of products
  warehouse - quantity of products in the warehouse of each coffee shop
The administrator interface includes full access to the database, as well as encapsulated functions for managing coffee shops (calculation of profit (for all time, for a period), opening/closing of coffee shops), employees (dismissal/hiring, calculation of salaries).
The cashier interface is a cash register. Before adding a product to an order, a check is made to ensure that the required number of products are available in the warehouse of a specific coffee shop to which the cashier is assigned.
The supplier's interface includes information about the missing products in each coffee shop, as well as a map that shows where the selected coffee shop is located.
