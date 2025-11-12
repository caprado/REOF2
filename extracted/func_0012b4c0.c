void func_0012b4c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012b4c0: addiu $sp, $sp, -0x10
    v1 = 0x1f << 16;                                            // 0x0012b4c4: lui $v1, 0x1f
    v1 = v1 + 0x6a54;                                           // 0x0012b4cc: addiu $v1, $v1, 0x6a54
    v0 = g_001f6a54;  // Global at 0x001f6a54                   // 0x0012b4d0: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0012b4d4: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x12b548;                           // 0x0012b4d8: bnez $v0, 0x12b548
    g_001f6a54 = v0;  // Global at 0x001f6a54                   // 0x0012b4dc: sw $v0, 0($v1)
    func_0012b4c0();  // 0x12b470                                // 0x0012b4e0: jal 0x12b470
    /* nop */                                                   // 0x0012b4e4: nop 
    func_0012b6f8();  // 0x12b628                                // 0x0012b4e8: jal 0x12b628
    /* nop */                                                   // 0x0012b4ec: nop 
    func_0012b898();  // 0x12b7c8                                // 0x0012b4f0: jal 0x12b7c8
    /* nop */                                                   // 0x0012b4f4: nop 
    func_0012b7c8();  // 0x12b6f8                                // 0x0012b4f8: jal 0x12b6f8
    /* nop */                                                   // 0x0012b4fc: nop 
    func_0012ba38();  // 0x12b968                                // 0x0012b500: jal 0x12b968
    /* nop */                                                   // 0x0012b504: nop 
    v0 = 0x1f << 16;                                            // 0x0012b508: lui $v0, 0x1f
    v1 = 0x20 << 16;                                            // 0x0012b50c: lui $v1, 0x20
    v0 = v0 + 0x6ae8;                                           // 0x0012b510: addiu $v0, $v0, 0x6ae8
    a1 = g_001fe378;  // Global at 0x001fe378                   // 0x0012b514: lw $a1, -0x1c88($v1)
    iChangeThreadPriority();  // 0x114170                       // 0x0012b518: jal 0x114170
    a0 = g_001f6ae8;  // Global at 0x001f6ae8                   // 0x0012b51c: lw $a0, 0($v0)
    func_00141ac8();  // 0x141ab0                                // 0x0012b524: jal 0x141ab0
    func_00141ba8();  // 0x141ac8                                // 0x0012b530: jal 0x141ac8
    return func_00141e50();  // Tail call                        // 0x0012b53c: j 0x141df8
    sp = sp + 0x10;                                             // 0x0012b540: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012b544: nop 
label_0x12b548:
    return;                                                     // 0x0012b54c: jr $ra
    sp = sp + 0x10;                                             // 0x0012b550: addiu $sp, $sp, 0x10
}