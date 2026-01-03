void func_001638b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001638b0: addiu $sp, $sp, -0x20
    v1 = 1;                                                     // 0x001638b4: addiu $v1, $zero, 1
    v0 = *(int8_t*)((s0) + 0x71);                               // 0x001638c8: lb $v0, 0x71($s0)
    if (v0 != v1) goto label_0x163904;                          // 0x001638cc: bne $v0, $v1, 0x163904
    s1 = *(int32_t*)((s0) + 0x40);                              // 0x001638d0: lw $s1, 0x40($s0)
    func_0013cd90();  // 13cd90                                // 0x001638d4: jal 0x13cd90
    a0 = *(int32_t*)((s0) + 0x4c);                              // 0x001638d8: lw $a0, 0x4c($s0)
    if (v0 != 0) goto label_0x163904;                           // 0x001638dc: bnez $v0, 0x163904
    /* nop */                                                   // 0x001638e0: nop 
    func_00173be8();  // 173be8                                // 0x001638e4: jal 0x173be8
    a0 = 0x23 << 16;                                            // 0x001638ec: lui $a0, 0x23
    if (v0 == 0) goto label_0x163900;                           // 0x001638f0: beqz $v0, 0x163900
    a0 = &str_00228d80;  // "E1071901 mwPlyExecSvrHndl: NULL handle." // 0x001638f4: addiu $a0, $a0, -0x7280
    func_00163410();  // 163410                                // 0x001638f8: jal 0x163410
    /* nop */                                                   // 0x001638fc: nop 
label_0x163900:
    *(uint8_t*)((s0) + 0x71) = 0;                               // 0x00163900: sb $zero, 0x71($s0)
label_0x163904:
    func_00174fb8();  // 174fb8                                // 0x00163904: jal 0x174fb8
    v1 = 6;                                                     // 0x0016390c: addiu $v1, $zero, 6
    if (v0 != v1) goto label_0x163924;                          // 0x00163910: bnel $v0, $v1, 0x163924
    v0 = 3;                                                     // 0x00163918: addiu $v0, $zero, 3
    *(uint32_t*)((s0) + 8) = v0;                                // 0x0016391c: sw $v0, 8($s0)
label_0x163924:
    return;                                                     // 0x0016392c: jr $ra
    sp = sp + 0x20;                                             // 0x00163930: addiu $sp, $sp, 0x20
}