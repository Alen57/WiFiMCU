
#include "MQTTPacket.h"

/**
  * @brief  ͨ��TCP��ʽ�������ݵ�TCP������
  * @param  buf �����׵�ַ
  * @param  buflen ���ݳ���
  * @retval С��0��ʾ����ʧ��
  */
int transport_sendPacketBuffer(unsigned char* buf, int buflen)
{
  //return send(SOCK_TCPS,buf,buflen);
  return 0;
}
/**
  * @brief  ������ʽ����TCP���������͵�����
  * @param  buf ���ݴ洢�׵�ַ
  * @param  count ���ݻ���������
  * @retval С��0��ʾ��������ʧ��
  */
int transport_getdata(unsigned char* buf, int count)
{
  //return recv(SOCK_TCPS,buf,count);
  return 0;
}


/**
  * @brief  ��һ��socket�����ӵ�������
  * @param  ��
  * @retval С��0��ʾ��ʧ��
  */
int transport_open(void)
{
  /*
  int32_t ret;
  //�½�һ��Socket���󶨱��ض˿�5000
  ret = socket(SOCK_TCPS,Sn_MR_TCP,5000,0x00);
  if(ret != SOCK_TCPS){
    printf("%d:Socket Error\r\n",SOCK_TCPS);
    while(1);
  }else{
    printf("%d:Opened\r\n",SOCK_TCPS);
  }

  //����TCP������
  ret = connect(SOCK_TCPS,domain_ip,1883);//�˿ڱ���Ϊ1883
  if(ret != SOCK_OK){
    printf("%d:Socket Connect Error\r\n",SOCK_TCPS);
    while(1);
  }else{
    printf("%d:Connected\r\n",SOCK_TCPS);
  }
	return 0;
  */
  return 0;
}

int transport_close(void)
{
  //close(SOCK_TCPS);
  return 0;
}
