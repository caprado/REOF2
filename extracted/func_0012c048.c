void func_0012c048() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012c048: addiu $sp, $sp, -0x10
    v1 = 0x1f << 16;                                            // 0x0012c04c: lui $v1, 0x1f
    v1 = v1 + 0x6a54;                                           // 0x0012c054: addiu $v1, $v1, 0x6a54
    v0 = g_001f6a54;  // Global at 0x001f6a54                   // 0x0012c058: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0012c05c: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x12c0e8;                           // 0x0012c060: bnez $v0, 0x12c0e8
    g_001f6a54 = v0;  // Global at 0x001f6a54                   // 0x0012c064: sw $v0, 0($v1)
    func_0012b4c0();  // 0x12b470                                // 0x0012c068: jal 0x12b470
    /* nop */                                                   // 0x0012c06c: nop 
    func_0012b628();  // 0x12b558                                // 0x0012c070: jal 0x12b558
    /* nop */                                                   // 0x0012c074: nop 
    func_0012b6f8();  // 0x12b628                                // 0x0012c078: jal 0x12b628
    /* nop */                                                   // 0x0012c07c: nop 
    func_0012b898();  // 0x12b7c8                                // 0x0012c080: jal 0x12b7c8
    /* nop */                                                   // 0x0012c084: nop 
    func_0012b7c8();  // 0x12b6f8                                // 0x0012c088: jal 0x12b6f8
    /* nop */                                                   // 0x0012c08c: nop 
    func_0012b968();  // 0x12b898                                // 0x0012c090: jal 0x12b898
    /* nop */                                                   // 0x0012c094: nop 
    func_0012ba38();  // 0x12b968                                // 0x0012c098: jal 0x12b968
    /* nop */                                                   // 0x0012c09c: nop 
    v0 = 0x1f << 16;                                            // 0x0012c0a0: lui $v0, 0x1f
    v1 = 0x20 << 16;                                            // 0x0012c0a4: lui $v1, 0x20
    v0 = v0 + 0x6ae8;                                           // 0x0012c0a8: addiu $v0, $v0, 0x6ae8
    a1 = g_001fe378;  // Global at 0x001fe378                   // 0x0012c0ac: lw $a1, -0x1c88($v1)
    iChangeThreadPriority();  // 0x114170                       // 0x0012c0b0: jal 0x114170
    a0 = g_001f6ae8;  // Global at 0x001f6ae8                   // 0x0012c0b4: lw $a0, 0($v0)
    func_00141ac8();  // 0x141ab0                                // 0x0012c0bc: jal 0x141ab0
    func_00141ba8();  // 0x141ac8                                // 0x0012c0c8: jal 0x141ac8
    v0 = 0x1f << 16;                                            // 0x0012c0d0: lui $v0, 0x1f
    g_001f6a58 = 0;  // Global at 0x001f6a58                    // 0x0012c0d8: sw $zero, 0x6a58($v0)
    return func_00141e50();  // Tail call                        // 0x0012c0dc: j 0x141df8
    sp = sp + 0x10;                                             // 0x0012c0e0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c0e4: nop 
label_0x12c0e8:
    return;                                                     // 0x0012c0ec: jr $ra
    sp = sp + 0x10;                                             // 0x0012c0f0: addiu $sp, $sp, 0x10
}