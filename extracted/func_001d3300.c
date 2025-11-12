void func_001d3300() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d3300: addiu $sp, $sp, -0x10
    v1 = 0x33 << 16;                                            // 0x001d3304: lui $v1, 0x33
    v1 = v1 + -0x1f10;                                          // 0x001d330c: addiu $v1, $v1, -0x1f10
    *(uint32_t*)((gp) + -0x6240) = v1;                          // 0x001d3310: sw $v1, -0x6240($gp)
    at = 0x31 << 16;                                            // 0x001d3314: lui $at, 0x31
    v1 = g_003137b5;  // Global at 0x003137b5                   // 0x001d3318: lbu $v1, 0x37b5($at)
    if (v1 == 0) goto label_0x1d3334;                           // 0x001d331c: beqz $v1, 0x1d3334
    /* nop */                                                   // 0x001d3320: nop 
    func_0034d560();  // 0x34d560                               // 0x001d3324: jal 0x34d560
    /* nop */                                                   // 0x001d3328: nop 
    goto label_0x1d3384;                                        // 0x001d332c: b 0x1d3384
label_0x1d3334:
    a0 = *(int32_t*)((gp) + -0x6240);                           // 0x001d3334: lw $a0, -0x6240($gp)
    v1 = g_0032e0f0;  // Global at 0x0032e0f0                   // 0x001d3338: lw $v1, 0($a0)
    if (v1 == 0) goto label_0x1d3380;                           // 0x001d333c: beqz $v1, 0x1d3380
    /* nop */                                                   // 0x001d3340: nop 
    v0 = g_0032e174;  // Global at 0x0032e174                   // 0x001d3344: lw $v0, 0x84($a0)
    if (v0 == 0) goto label_0x1d3364;                           // 0x001d3348: beqz $v0, 0x1d3364
    /* nop */                                                   // 0x001d334c: nop 
    a0 = 0xff0;                                                 // 0x001d3350: addiu $a0, $zero, 0xff0
    func_001d3c20();  // 0x1d3ae0                                // 0x001d3354: jal 0x1d3ae0
    a1 = 1;                                                     // 0x001d3358: addiu $a1, $zero, 1
    v0 = *(int32_t*)((gp) + -0x6240);                           // 0x001d335c: lw $v0, -0x6240($gp)
    *(uint32_t*)((v0) + 0x84) = 0;                              // 0x001d3360: sw $zero, 0x84($v0)
label_0x1d3364:
    v0 = *(int32_t*)((gp) + -0x6240);                           // 0x001d3364: lw $v0, -0x6240($gp)
    a0 = 0x33 << 16;                                            // 0x001d3368: lui $a0, 0x33
    a0 = a0 + -0x1f10;                                          // 0x001d336c: addiu $a0, $a0, -0x1f10
    a2 = 0x98;                                                  // 0x001d3374: addiu $a2, $zero, 0x98
    func_00107d30();  // 0x107c70                                // 0x001d3378: jal 0x107c70
    *(uint32_t*)(v0) = 0;                                       // 0x001d337c: sw $zero, 0($v0)
label_0x1d3380:
label_0x1d3384:
    return;                                                     // 0x001d3384: jr $ra
    sp = sp + 0x10;                                             // 0x001d3388: addiu $sp, $sp, 0x10
}