create table migrations (
    id integer primary key,
    migration_name text,
    apply_at datetime default current_timestamp
);



create table clients (
    id integer primary key,
    name text,
    pvr text,
    pvr_valid_until text
);


create table products (
    id integer primary key,
    provider_id integer,
    name text,
    cost DECIMAL(5,2),
    price DECIMAL(5,2)
);


create table orders (
    id integer primary key,
    client_id references clients(id),

    created_at datetime default current_timestamp
)

    create table order_line (
        id integer primary key,
        order_id references orders(id),
        product_id references products(id),
        amount integer
    )


create table machines (
    id integer primary key,
    client_id references clients(id),
    name text,
    brand text,
    model text,
    channels integer,
    enrollment text
);



    create table machine_channel (
        id integer primary key,
        product_id references products(id),
        machine_id references machines(id),

        length integer
    );
