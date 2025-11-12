void func_001c18d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c18d0: addiu $sp, $sp, -0x10
    v0 = a1 & 0xffff;                                           // 0x001c18d4: andi $v0, $a1, 0xffff
    if (v0 != 0) goto label_0x1c18f8;                           // 0x001c18dc: bnez $v0, 0x1c18f8
    func_001c1850();  // 0x1c17d0                                // 0x001c18e8: jal 0x1c17d0
    goto label_0x1c1970;                                        // 0x001c18f0: b 0x1c1970
label_0x1c18f8:
    a2 = v0 + -1;                                               // 0x001c18f8: addiu $a2, $v0, -1
    a0 = 0x36 << 16;                                            // 0x001c18fc: lui $a0, 0x36
    a0 = a0 + -0x5f80;                                          // 0x001c1904: addiu $a0, $a0, -0x5f80
    goto label_0x1c1928;                                        // 0x001c1908: b 0x1c1928
    v0 = 0x3e7;                                                 // 0x001c190c: addiu $v0, $zero, 0x3e7
label_0x1c1910:
    if (a2 != v1) goto label_0x1c1920;                          // 0x001c1910: bne $a2, $v1, 0x1c1920
    /* nop */                                                   // 0x001c1914: nop 
    goto label_0x1c1948;                                        // 0x001c1918: b 0x1c1948
    a3 = t0 & 0xffff;                                           // 0x001c191c: andi $a3, $t0, 0xffff
label_0x1c1920:
    v1 = t0 + 1;                                                // 0x001c1920: addiu $v1, $t0, 1
    t0 = v1 & 0xffff;                                           // 0x001c1924: andi $t0, $v1, 0xffff
label_0x1c1928:
    a1 = t0 & 0xffff;                                           // 0x001c1928: andi $a1, $t0, 0xffff
    v1 = a1 << 1;                                               // 0x001c192c: sll $v1, $a1, 1
    v1 = v1 + a1;                                               // 0x001c1930: addu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001c1934: sll $v1, $v1, 2
    v1 = a0 + v1;                                               // 0x001c1938: addu $v1, $a0, $v1
    v1 = *(uint16_t*)(v1);                                      // 0x001c193c: lhu $v1, 0($v1)
    if (v1 != v0) goto label_0x1c1910;                          // 0x001c1940: bne $v1, $v0, 0x1c1910
    /* nop */                                                   // 0x001c1944: nop 
label_0x1c1948:
    a0 = a3 & 0xffff;                                           // 0x001c1948: andi $a0, $a3, 0xffff
    v0 = 0x3e7;                                                 // 0x001c194c: addiu $v0, $zero, 0x3e7
    if (a0 == v0) goto label_0x1c1968;                          // 0x001c1950: beq $a0, $v0, 0x1c1968
    /* nop */                                                   // 0x001c1954: nop 
    func_001c18d0();  // 0x1c1850                                // 0x001c1958: jal 0x1c1850
    /* nop */                                                   // 0x001c195c: nop 
    goto label_0x1c196c;                                        // 0x001c1960: b 0x1c196c
    /* nop */                                                   // 0x001c1964: nop 
label_0x1c1968:
    v0 = *(int32_t*)((gp) + -0x7ba0);                           // 0x001c1968: lw $v0, -0x7ba0($gp)
label_0x1c196c:
label_0x1c1970:
    return;                                                     // 0x001c1970: jr $ra
    sp = sp + 0x10;                                             // 0x001c1974: addiu $sp, $sp, 0x10
}