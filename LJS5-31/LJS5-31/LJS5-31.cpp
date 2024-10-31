// LJS5-31.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <D3D11.h>
#include <D3DX11.h>
#include<xnamath.h>


#include <iostream>

void PrintVector(FXMVECTOR v);

int main()
{
	XMVECTOR v1{};
	XMVECTOR vR{};

	XMMATRIX matRotation{};
	XMMATRIX matLocation{};
	XMMATRIX matT{};

	v1 = XMVectorSet(5.0f, 0.0f, 0.0f, 1.0f);
	vR = XMVectorSet(0.0f, 0.0f, 0.0f, 1.0f);

	printf("기준 : ");
	PrintVector(v1);

	matRotation = XMMatrixIdentity();
	matLocation = XMMatrixIdentity();


	matRotation = XMMatrixRotationY(XM_PIDIV2);
	matLocation = XMMatrixTranslation(10.0f, 0.0f, 0.0f);

	matT = matRotation * matLocation;

	vR = XMVector3Transform(v1, matT);
	printf("결합법칙");
	PrintVector(vR);


	//// 정순서
	//printf("기존\n");
	//vR = XMVector3Transform(v1, matRotation);
	//printf("y축기준 90도 회전 : ");
	//PrintVector(vR);
	//vR = XMVector3Transform(vR, matLocation);
	//printf("x축으로 10만큼 이동 : ");
	//PrintVector(vR);


	////역순서
	//printf("역순\n");
	//vR = XMVector3Transform(v1, matLocation);
	//printf("x축으로 10만큼 이동 : ");
	//PrintVector(vR);

	//vR = XMVector3Transform(vR, matRotation);
	//printf("y축기준 90도 회전 : ");
	//PrintVector(vR);
	//

	////y축으로 90도만큼 회전하는 행렬을 구한다
	//matRotation = XMMatrixRotationY(XM_PIDIV2);
	//vR = XMVector3Transform(v1, matRotation);
	//printf("y축기준 90도 회전");
	//PrintVector(vR);

	////x방향으로 10만큼 이동하는 행렬을 구한다
	//matLocation = XMMatrixTranslation(10.0f, 0.0f, 0.0f);
	//vR = XMVector3Transform(v1, matLocation);
	//printf("x축으로 10만큼 이동");
	//PrintVector(vR);

	////v1을 각각 행렬에 통과시켜 결과를 확인한다






}

void PrintVector(FXMVECTOR v)
{
	printf("%f, %f, %f, %f\n", v.m128_f32[0], v.m128_f32[1], v.m128_f32[2], v.m128_f32[3]);
}
