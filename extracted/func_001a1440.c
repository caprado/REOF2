void func_001a1440() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = *(int32_t*)((a0) + 8);                                 // 0x001a1440: lw $a2, 8($a0)
    v1 = a1 << 4;                                               // 0x001a1444: sll $v1, $a1, 4
    a1 = 0 | 0xffff;                                            // 0x001a1448: ori $a1, $zero, 0xffff
    a3 = a2 + v1;                                               // 0x001a144c: addu $a3, $a2, $v1
    v1 = *(uint16_t*)((a3) + 0xc);                              // 0x001a1450: lhu $v1, 0xc($a3)
    if (v1 == a1) goto label_0x1a1470;                          // 0x001a1454: beq $v1, $a1, 0x1a1470
    /* nop */                                                   // 0x001a1458: nop 
    a1 = *(uint16_t*)((a3) + 0xe);                              // 0x001a145c: lhu $a1, 0xe($a3)
    v1 = v1 << 4;                                               // 0x001a1460: sll $v1, $v1, 4
    v1 = a2 + v1;                                               // 0x001a1464: addu $v1, $a2, $v1
    goto label_0x1a148c;                                        // 0x001a1468: b 0x1a148c
    *(uint16_t*)((v1) + 0xe) = a1;                              // 0x001a146c: sh $a1, 0xe($v1)
label_0x1a1470:
    v1 = *(uint16_t*)((a3) + 0xe);                              // 0x001a1470: lhu $v1, 0xe($a3)
    *(uint32_t*)((a0) + 0x24) = v1;                             // 0x001a1474: sw $v1, 0x24($a0)
    v1 = *(int32_t*)((a0) + 0x24);                              // 0x001a1478: lw $v1, 0x24($a0)
    if (v1 != a1) goto label_0x1a148c;                          // 0x001a147c: bne $v1, $a1, 0x1a148c
    /* nop */                                                   // 0x001a1480: nop 
    v1 = *(int32_t*)((a0) + 0x14);                              // 0x001a1484: lw $v1, 0x14($a0)
    *(uint32_t*)((a0) + 0x10) = v1;                             // 0x001a1488: sw $v1, 0x10($a0)
label_0x1a148c:
    a1 = *(uint16_t*)((a3) + 0xe);                              // 0x001a148c: lhu $a1, 0xe($a3)
    v1 = 0 | 0xffff;                                            // 0x001a1490: ori $v1, $zero, 0xffff
    if (a1 == v1) goto label_0x1a14b0;                          // 0x001a1494: beq $a1, $v1, 0x1a14b0
    /* nop */                                                   // 0x001a1498: nop 
    v1 = *(int32_t*)((a0) + 8);                                 // 0x001a149c: lw $v1, 8($a0)
    a1 = a1 << 4;                                               // 0x001a14a0: sll $a1, $a1, 4
    a2 = *(uint16_t*)((a3) + 0xc);                              // 0x001a14a4: lhu $a2, 0xc($a3)
    v1 = v1 + a1;                                               // 0x001a14a8: addu $v1, $v1, $a1
    *(uint16_t*)((v1) + 0xc) = a2;                              // 0x001a14ac: sh $a2, 0xc($v1)
label_0x1a14b0:
    return;                                                     // 0x001a14b0: jr $ra
    /* nop */                                                   // 0x001a14b4: nop 
}