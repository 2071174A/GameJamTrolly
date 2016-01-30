// Fill out your copyright notice in the Description page of Project Settings.

#include "GameJamTrolly.h"
#include "ShopItem.h"


// Sets default values
AShopItem::AShopItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Create the static mesh component
	ShopItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShopItemMesh"));
	RootComponent = ShopItemMesh;
}

// Called when the game starts or when spawned
void AShopItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShopItem::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

int32 AShopItem::GetPrice()
{
	return Price;
}

void AShopItem::SetPrice(int32 NewPrice)
{
	Price = NewPrice;
}
