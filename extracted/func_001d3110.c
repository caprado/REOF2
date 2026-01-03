void func_001d3110() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_14, local_18, local_1c;
    
    sp = sp + -0x30;                                            // 0x001d3110: addiu $sp, $sp, -0x30
    v0 = 0x33 << 16;                                            // 0x001d3114: lui $v0, 0x33
    v0 = v0 + -0x1f10;                                          // 0x001d311c: addiu $v0, $v0, -0x1f10
    *(uint32_t*)((gp) + -0x6240) = v0;                          // 0x001d3120: sw $v0, -0x6240($gp)
    a0 = *(int32_t*)((gp) + -0x6240);                           // 0x001d3128: lw $a0, -0x6240($gp)
    func_00107c70();  // 107c70                                // 0x001d312c: jal 0x107c70
    a2 = 0x98;                                                  // 0x001d3130: addiu $a2, $zero, 0x98
    a0 = sp + 0x10;                                             // 0x001d3134: addiu $a0, $sp, 0x10
    func_00107c70();  // 107c70                                // 0x001d313c: jal 0x107c70
    a2 = 0x20;                                                  // 0x001d3140: addiu $a2, $zero, 0x20
    FPU_F0 = *(float*)((gp) + -0x7fe0);  // Load float          // 0x001d3144: lwc1 $f0, -0x7fe0($gp)
    v0 = 1;                                                     // 0x001d3148: addiu $v0, $zero, 1
    local_14 = v0;                                              // 0x001d314c: sw $v0, 0x14($sp)
    a0 = sp + 0x10;                                             // 0x001d3150: addiu $a0, $sp, 0x10
    local_18 = v0;                                              // 0x001d3154: sw $v0, 0x18($sp)
    local_1c = 0;                                               // 0x001d3158: sb $zero, 0x1c($sp)
    func_0015e360();  // 15e360                                // 0x001d315c: jal 0x15e360
    *(float*)((sp) + 0x10) = FPU_F0;  // Store float            // 0x001d3160: swc1 $f0, 0x10($sp)
    return;                                                     // 0x001d3168: jr $ra
    sp = sp + 0x30;                                             // 0x001d316c: addiu $sp, $sp, 0x30
}