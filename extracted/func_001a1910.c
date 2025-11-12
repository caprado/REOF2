void func_001a1910() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = 0x23 << 16;                                            // 0x001a1914: lui $a3, 0x23
    a1 = 0xff;                                                  // 0x001a1918: addiu $a1, $zero, 0xff
    a3 = a3 + -0x5d30;                                          // 0x001a191c: addiu $a3, $a3, -0x5d30
label_0x1a1924:
    a2 = *(int32_t*)((a0) + 8);                                 // 0x001a1924: lw $a2, 8($a0)
    v1 = t0 << 2;                                               // 0x001a192c: sll $v1, $t0, 2
    v1 = a3 + v1;                                               // 0x001a1930: addu $v1, $a3, $v1
    v1 = *(int32_t*)(v1);                                       // 0x001a1934: lw $v1, 0($v1)
    v1 = a2 & v1;                                               // 0x001a1938: and $v1, $a2, $v1
    if (v1 == 0) goto label_0x1a1968;                           // 0x001a193c: beqz $v1, 0x1a1968
    v1 = t0 << 1;                                               // 0x001a1940: sll $v1, $t0, 1
    v1 = t0 << 1;                                               // 0x001a1944: sll $v1, $t0, 1
    v1 = a0 + v1;                                               // 0x001a1948: addu $v1, $a0, $v1
    a2 = v1 + 0x38;                                             // 0x001a194c: addiu $a2, $v1, 0x38
    v1 = *(uint8_t*)((v1) + 0x38);                              // 0x001a1950: lbu $v1, 0x38($v1)
    if (v1 == a1) goto label_0x1a1970;                          // 0x001a1954: beq $v1, $a1, 0x1a1970
    /* nop */                                                   // 0x001a1958: nop 
    v1 = v1 + 1;                                                // 0x001a195c: addiu $v1, $v1, 1
    goto label_0x1a1970;                                        // 0x001a1960: b 0x1a1970
    *(uint8_t*)(a2) = v1;                                       // 0x001a1964: sb $v1, 0($a2)
label_0x1a1968:
    v1 = a0 + v1;                                               // 0x001a1968: addu $v1, $a0, $v1
    *(uint16_t*)((v1) + 0x38) = 0;                              // 0x001a196c: sh $zero, 0x38($v1)
label_0x1a1970:
    v1 = t1 + 1;                                                // 0x001a1970: addiu $v1, $t1, 1
    v1 = (t1 < 0x18) ? 1 : 0;                                   // 0x001a197c: slti $v1, $t1, 0x18
    if (v1 != 0) goto label_0x1a1924;                           // 0x001a1980: bnez $v1, 0x1a1924
    return;                                                     // 0x001a1988: jr $ra
    /* nop */                                                   // 0x001a198c: nop 
}