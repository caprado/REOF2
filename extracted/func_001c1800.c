void func_001c1800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 < 0) goto label_0x1c1818;                            // 0x001c1800: bltz $a0, 0x1c1818
    v0 = (a0 < 0x5d) ? 1 : 0;                                   // 0x001c1808: slti $v0, $a0, 0x5d
    if (v0 != 0) goto label_0x1c1820;                           // 0x001c180c: bnez $v0, 0x1c1820
    v1 = a0 << 2;                                               // 0x001c1810: sll $v1, $a0, 2
label_0x1c1818:
    goto label_0x1c1844;                                        // 0x001c1818: b 0x1c1844
    /* nop */                                                   // 0x001c181c: nop 
label_0x1c1820:
    at = 0x31 << 16;                                            // 0x001c1820: lui $at, 0x31
    a0 = g_003137dd;  // Global at 0x003137dd                   // 0x001c1824: lbu $a0, 0x37dd($at)
    v0 = 0x22 << 16;                                            // 0x001c1828: lui $v0, 0x22
    v0 = v0 + -0x1340;                                          // 0x001c182c: addiu $v0, $v0, -0x1340
    a0 = a0 << 2;                                               // 0x001c1830: sll $a0, $a0, 2
    v0 = v0 + a0;                                               // 0x001c1834: addu $v0, $v0, $a0
    v0 = g_0021ecc0;  // Global at 0x0021ecc0                   // 0x001c1838: lw $v0, 0($v0)
    v0 = v0 + v1;                                               // 0x001c183c: addu $v0, $v0, $v1
    v0 = g_0021ecc0;  // Global at 0x0021ecc0                   // 0x001c1840: lw $v0, 0($v0)
label_0x1c1844:
    return;                                                     // 0x001c1844: jr $ra
    /* nop */                                                   // 0x001c1848: nop 
}