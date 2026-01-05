void func_001bd740() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x130;                                           // 0x001bd740: addiu $sp, $sp, -0x130
    a1 = 0x24 << 16;                                            // 0x001bd744: lui $a1, 0x24
    a1 = &str_0023dfd0;  // "%s,,%s,PFS"                        // 0x001bd74c: addiu $a1, $a1, -0x2030
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bd750: addu.qb $zero, $sp, $s1
    a2 = 0x1234;                                                // 0x001bd754: addiu $a2, $zero, 0x1234
    func_001bdde0();  // 1bdde0                                // 0x001bd760: jal 0x1bdde0
    a0 = sp + 0x30;                                             // 0x001bd764: addiu $a0, $sp, 0x30
    a0 = 0x24 << 16;                                            // 0x001bd768: lui $a0, 0x24
    a1 = sp + 0x30;                                             // 0x001bd76c: addiu $a1, $sp, 0x30
    a0 = a0 + -0x2050;                                          // 0x001bd770: addiu $a0, $a0, -0x2050
    a2 = s1 + 0x10;                                             // 0x001bd774: addiu $a2, $s1, 0x10
    func_00119b80();  // 119b80                                // 0x001bd778: jal 0x119b80
    a3 = 4;                                                     // 0x001bd77c: addiu $a3, $zero, 4
    if (v0 >= 0) goto label_0x1bd79c;                           // 0x001bd780: bgez $v0, 0x1bd79c
label_0x1bd78c:
    func_001bd340();  // 1bd340                                // 0x001bd78c: jal 0x1bd340
    goto label_0x1bd7d4;                                        // 0x001bd794: b 0x1bd7d4
label_0x1bd79c:
    func_001bdd30();  // 1bdd30                                // 0x001bd79c: jal 0x1bdd30
    if (v0 < 0) goto label_0x1bd78c;                            // 0x001bd7a4: bltz $v0, 0x1bd78c
    v1 = *(int32_t*)(s1);                                       // 0x001bd7ac: lw $v1, 0($s1)
    v1 = v1 + 1;                                                // 0x001bd7b0: addiu $v1, $v1, 1
    *(uint32_t*)(s1) = v1;                                      // 0x001bd7b4: sw $v1, 0($s1)
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x001bd7b8: sw $zero, 4($s1)
    *(uint32_t*)((s1) + 0x24) = 0;                              // 0x001bd7bc: sw $zero, 0x24($s1)
    *(uint32_t*)((s1) + 0x28) = 0;                              // 0x001bd7c0: sw $zero, 0x28($s1)
    *(uint32_t*)((s1) + 0x2c) = 0;                              // 0x001bd7c4: sw $zero, 0x2c($s1)
    *(uint32_t*)((s1) + 0x34) = 0;                              // 0x001bd7c8: sw $zero, 0x34($s1)
    *(uint32_t*)((s1) + 0x38) = 0;                              // 0x001bd7cc: sw $zero, 0x38($s1)
label_0x1bd7d4:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bd7d4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bd7d8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bd7dc: jr $ra
    sp = sp + 0x130;                                            // 0x001bd7e0: addiu $sp, $sp, 0x130
}