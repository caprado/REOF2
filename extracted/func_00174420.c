void func_00174420() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00174420: addiu $sp, $sp, -0x10
    func_00169af0();  // 169af0                                // 0x0017442c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00174434: lui $a1, 0xff00
    a2 = 1;                                                     // 0x0017443c: addiu $a2, $zero, 1
    if (v0 == 0) goto label_0x174460;                           // 0x00174440: beqz $v0, 0x174460
    a1 = a1 | 0x153;                                            // 0x00174444: ori $a1, $a1, 0x153
    return func_00169940();  // Tail call                        // 0x00174454: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00174458: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017445c: nop 
label_0x174460:
    func_00175120();  // 175120                                // 0x00174460: jal 0x175120
    a1 = 0x2f;                                                  // 0x00174464: addiu $a1, $zero, 0x2f
    return func_00171f90();  // Tail call                        // 0x00174474: j 0x171f80
    sp = sp + 0x10;                                             // 0x00174478: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017447c: nop 
    sp = sp + -0x20;                                            // 0x00174480: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x00174498: jal 0x169af0
    *(uint32_t*)(s0) = 0;                                       // 0x0017449c: sw $zero, 0($s0)
    a1 = 0xff00 << 16;                                          // 0x001744a0: lui $a1, 0xff00
    if (v0 == 0) goto label_0x1744c8;                           // 0x001744a4: beqz $v0, 0x1744c8
    a1 = a1 | 0x154;                                            // 0x001744b0: ori $a1, $a1, 0x154
    return func_00169940();  // Tail call                        // 0x001744bc: j 0x1698d0
    sp = sp + 0x20;                                             // 0x001744c0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001744c4: nop 
label_0x1744c8:
    a0 = *(int32_t*)((s1) + 0x2ab0);                            // 0x001744c8: lw $a0, 0x2ab0($s1)
    func_001744f0();  // 1744f0                                // 0x001744cc: jal 0x1744f0
    return;                                                     // 0x001744e4: jr $ra
    sp = sp + 0x20;                                             // 0x001744e8: addiu $sp, $sp, 0x20
}