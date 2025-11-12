void func_001dd5c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x54;                                                  // 0x001dd5c8: addiu $v0, $zero, 0x54
    t0 = a0 & 1;                                                // 0x001dd5cc: andi $t0, $a0, 1
    t1 = 0x25 << 16;                                            // 0x001dd5d4: lui $t1, 0x25
    a2 = t1 + -0x7098;                                          // 0x001dd5d8: addiu $a2, $t1, -0x7098
    a1 = a1 & 0xff;                                             // 0x001dd5dc: andi $a1, $a1, 0xff
    v0 = a0 + a2;                                               // 0x001dd5e4: addu $v0, $a0, $a2
    v1 = *(uint8_t*)(v0);                                       // 0x001dd5e8: lbu $v1, 0($v0)
    if (a1 == v1) goto label_0x1dd624;                          // 0x001dd5ec: beq $a1, $v1, 0x1dd624
    a3 = a3 + 1;                                                // 0x001dd5f4: addiu $a3, $a3, 1
label_0x1dd5f8:
    v0 = ((unsigned)a3 < (unsigned)0x15) ? 1 : 0;               // 0x001dd5f8: sltiu $v0, $a3, 0x15
    if (v0 == 0) goto label_0x1dd630;                           // 0x001dd5fc: beqz $v0, 0x1dd630
    v1 = 0x54;                                                  // 0x001dd600: addiu $v1, $zero, 0x54
    a0 = a3 << 2;                                               // 0x001dd604: sll $a0, $a3, 2
    /* multiply: t0 * v1 -> hi:lo */                            // 0x001dd608: mult $ac3, $t0, $v1
    a2 = t1 + -0x7098;                                          // 0x001dd60c: addiu $a2, $t1, -0x7098
    a0 = a0 + v1;                                               // 0x001dd610: addu $a0, $a0, $v1
    v0 = a0 + a2;                                               // 0x001dd614: addu $v0, $a0, $a2
    v1 = *(uint8_t*)(v0);                                       // 0x001dd618: lbu $v1, 0($v0)
    if (t2 != v1) goto label_0x1dd5f8;                          // 0x001dd61c: bne $t2, $v1, 0x1dd5f8
    a3 = a3 + 1;                                                // 0x001dd620: addiu $a3, $a3, 1
label_0x1dd624:
    v0 = a2 + a0;                                               // 0x001dd624: addu $v0, $a2, $a0
    v1 = *(uint16_t*)((v0) + 2);                                // 0x001dd628: lhu $v1, 2($v0)
    a1 = v1 | 0x4000;                                           // 0x001dd62c: ori $a1, $v1, 0x4000
label_0x1dd630:
    return;                                                     // 0x001dd630: jr $ra
}