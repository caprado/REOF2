void func_0015f270() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015f270: addiu $sp, $sp, -0x20
    s1 = *(int32_t*)((s0) + 0x134);                             // 0x0015f284: lw $s1, 0x134($s0)
    func_00111f90();  // 111f90                                // 0x0015f288: jal 0x111f90
    at = 0x22 << 16;                                            // 0x0015f290: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x0015f298: jal 0x111a58
    func_00112048();  // 112048                                // 0x0015f2a0: jal 0x112048
    return func_0015fc30();  // Tail call                        // 0x0015f2c0: j 0x15fbd8
    sp = sp + 0x20;                                             // 0x0015f2c4: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x0015f2c8: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0x44);                              // 0x0015f2d4: lw $v0, 0x44($a0)
    s0 = *(int32_t*)((a0) + 0x40);                              // 0x0015f2d8: lw $s0, 0x40($a0)
    if (v0 == 0) goto label_0x15f310;                           // 0x0015f2dc: beqz $v0, 0x15f310
    func_001643e8();  // 1643e8                                // 0x0015f2e4: jal 0x1643e8
    /* nop */                                                   // 0x0015f2e8: nop 
    v1 = 3;                                                     // 0x0015f2ec: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x15f314;                          // 0x0015f2f0: bnel $v0, $v1, 0x15f314
    return func_00173c50();  // Tail call                        // 0x0015f304: j 0x173be8
    sp = sp + 0x10;                                             // 0x0015f308: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015f30c: nop 
label_0x15f310:
label_0x15f314:
    return;                                                     // 0x0015f318: jr $ra
    sp = sp + 0x10;                                             // 0x0015f31c: addiu $sp, $sp, 0x10
}