void func_001d6700() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = 0x33 << 16;                                            // 0x001d6700: lui $a3, 0x33
    v1 = a0 & 0xffff;                                           // 0x001d6704: andi $v1, $a0, 0xffff
    a3 = a3 + -0x1570;                                          // 0x001d6708: addiu $a3, $a3, -0x1570
    goto label_0x1d676c;                                        // 0x001d670c: b 0x1d676c
label_0x1d6714:
    v0 = g_0032ea90;  // Global at 0x0032ea90                   // 0x001d6714: lbu $v0, 0($a3)
    if (v0 == 0) goto label_0x1d6764;                           // 0x001d6718: beqz $v0, 0x1d6764
    /* nop */                                                   // 0x001d671c: nop 
    a2 = g_0032ea94;  // Global at 0x0032ea94                   // 0x001d6720: lw $a2, 4($a3)
    if (a2 == 0) goto label_0x1d6764;                           // 0x001d6724: beqz $a2, 0x1d6764
    goto label_0x1d675c;                                        // 0x001d672c: b 0x1d675c
    v0 = (a0 < 0x640) ? 1 : 0;                                  // 0x001d6730: slti $v0, $a0, 0x640
label_0x1d6734:
    v0 = a2 + v0;                                               // 0x001d6734: addu $v0, $a2, $v0
    v0 = *(uint16_t*)((v0) + 4);                                // 0x001d6738: lhu $v0, 4($v0)
    if (v0 == 0) goto label_0x1d6754;                           // 0x001d673c: beqz $v0, 0x1d6754
    /* nop */                                                   // 0x001d6740: nop 
    if (v0 != v1) goto label_0x1d6754;                          // 0x001d6744: bne $v0, $v1, 0x1d6754
    /* nop */                                                   // 0x001d6748: nop 
    goto label_0x1d6778;                                        // 0x001d674c: b 0x1d6778
    v0 = 1;                                                     // 0x001d6750: addiu $v0, $zero, 1
label_0x1d6754:
    a0 = a0 + 1;                                                // 0x001d6754: addiu $a0, $a0, 1
    v0 = (a0 < 0x640) ? 1 : 0;                                  // 0x001d6758: slti $v0, $a0, 0x640
label_0x1d675c:
    if (v0 != 0) goto label_0x1d6734;                           // 0x001d675c: bnez $v0, 0x1d6734
    v0 = a0 << 1;                                               // 0x001d6760: sll $v0, $a0, 1
label_0x1d6764:
    a1 = a1 + 1;                                                // 0x001d6764: addiu $a1, $a1, 1
    a3 = a3 + 0x10;                                             // 0x001d6768: addiu $a3, $a3, 0x10
label_0x1d676c:
    v0 = (a1 < 4) ? 1 : 0;                                      // 0x001d676c: slti $v0, $a1, 4
    if (v0 != 0) goto label_0x1d6714;                           // 0x001d6770: bnez $v0, 0x1d6714
label_0x1d6778:
    return;                                                     // 0x001d6778: jr $ra
    /* nop */                                                   // 0x001d677c: nop 
}