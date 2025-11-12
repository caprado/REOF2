void func_0018d530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0018d530: addiu $sp, $sp, -0x10
    at = 0x29 << 16;                                            // 0x0018d534: lui $at, 0x29
    v0 = g_0028fcc4;  // Global at 0x0028fcc4                   // 0x0018d53c: lw $v0, -0x33c($at)
    if (v0 != 0) goto label_0x18d55c;                           // 0x0018d540: bnez $v0, 0x18d55c
    at = 0x29 << 16;                                            // 0x0018d544: lui $at, 0x29
    v0 = g_0028fcc8;  // Global at 0x0028fcc8                   // 0x0018d548: lw $v0, -0x338($at)
    if (v0 != 0) goto label_0x18d55c;                           // 0x0018d54c: bnez $v0, 0x18d55c
    goto label_0x18d5b8;                                        // 0x0018d554: b 0x18d5b8
label_0x18d55c:
    func_0018d530();  // 0x18d4c0                                // 0x0018d55c: jal 0x18d4c0
    /* nop */                                                   // 0x0018d560: nop 
    at = 0x29 << 16;                                            // 0x0018d564: lui $at, 0x29
    v0 = 0x29 << 16;                                            // 0x0018d568: lui $v0, 0x29
    v1 = g_00290374;  // Global at 0x00290374                   // 0x0018d56c: lw $v1, 0x374($at)
    v0 = v0 + -0x33c;                                           // 0x0018d570: addiu $v0, $v0, -0x33c
    v1 = v1 << 2;                                               // 0x0018d574: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x0018d578: addu $v0, $v0, $v1
    v0 = g_0028fcc4;  // Global at 0x0028fcc4                   // 0x0018d57c: lw $v0, 0($v0)
    if (v0 != 0) goto label_0x18d590;                           // 0x0018d580: bnez $v0, 0x18d590
    goto label_0x18d5b4;                                        // 0x0018d588: b 0x18d5b4
    /* nop */                                                   // 0x0018d58c: nop 
label_0x18d590:
    func_0018d4c0();  // 0x18d2f0                                // 0x0018d590: jal 0x18d2f0
    /* nop */                                                   // 0x0018d594: nop 
    func_0018d530();  // 0x18d4c0                                // 0x0018d598: jal 0x18d4c0
    /* nop */                                                   // 0x0018d59c: nop 
    func_0018dc30();  // 0x18dba0                                // 0x0018d5a0: jal 0x18dba0
    /* nop */                                                   // 0x0018d5a4: nop 
    v1 = 2;                                                     // 0x0018d5a8: addiu $v1, $zero, 2
    v0 = 1;                                                     // 0x0018d5ac: addiu $v0, $zero, 1
    *(uint32_t*)((gp) + -0x64d4) = v1;                          // 0x0018d5b0: sw $v1, -0x64d4($gp)
label_0x18d5b4:
label_0x18d5b8:
    return;                                                     // 0x0018d5b8: jr $ra
    sp = sp + 0x10;                                             // 0x0018d5bc: addiu $sp, $sp, 0x10
}