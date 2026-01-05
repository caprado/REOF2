void func_00117408() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00117408: addiu $sp, $sp, -0x40
    func_00116fd0();  // 116fd0                                // 0x00117424: jal 0x116fd0
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x00117430: lw $a0, 0x1c($s0)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x00117434: lw $v1, 0x14($s0)
    v0 = 0x8000 << 16;                                          // 0x00117438: lui $v0, 0x8000
    v0 = v0 | 9;                                                // 0x0011743c: ori $v0, $v0, 9
    *(uint32_t*)((s2) + 0x1c) = a0;                             // 0x00117440: sw $a0, 0x1c($s2)
    *(uint32_t*)((s2) + 0x14) = v1;                             // 0x00117444: sw $v1, 0x14($s2)
    *(uint32_t*)((s2) + 0x20) = v0;                             // 0x0011744c: sw $v0, 0x20($s2)
    func_00117378();  // 117378                                // 0x00117450: jal 0x117378
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x00117454: lw $a0, 0x20($s0)
    /* bnezl $v0, 0x11746c */                                   // 0x00117458: bnezl $v0, 0x11746c
    *(uint32_t*)((s2) + 0x24) = v0;                             // 0x0011745c: sw $v0, 0x24($s2)
    *(uint32_t*)((s2) + 0x24) = 0;                              // 0x00117460: sw $zero, 0x24($s2)
    goto label_0x117474;                                        // 0x00117464: b 0x117474
    *(uint32_t*)((s2) + 0x28) = 0;                              // 0x00117468: sw $zero, 0x28($s2)
    v0 = g_80000008;  // Global at 0x80000008                   // 0x0011746c: lw $v0, 8($v0)
    *(uint32_t*)((s2) + 0x28) = v0;                             // 0x00117470: sw $v0, 0x28($s2)
label_0x117474:
    a0 = 0x8000 << 16;                                          // 0x00117474: lui $a0, 0x8000
    a0 = a0 | 8;                                                // 0x0011747c: ori $a0, $a0, 8
    a2 = 0x40;                                                  // 0x00117480: addiu $a2, $zero, 0x40
    func_00116b08();  // 116b08                                // 0x0011748c: jal 0x116b08
    if (v0 != 0) goto label_0x1174c0;                           // 0x00117494: bnez $v0, 0x1174c0
    a1 = 0x11 << 16;                                            // 0x001174a0: lui $a1, 0x11
    a1 = a1 + 0x73c8;                                           // 0x001174a4: addiu $a1, $a1, 0x73c8
    a0 = 0x800;                                                 // 0x001174ac: addiu $a0, $zero, 0x800
    return func_0011f1b8();  // Tail call                        // 0x001174b8: j 0x11f0c8
    sp = sp + 0x40;                                             // 0x001174bc: addiu $sp, $sp, 0x40
label_0x1174c0:
    return;                                                     // 0x001174cc: jr $ra
    sp = sp + 0x40;                                             // 0x001174d0: addiu $sp, $sp, 0x40
}