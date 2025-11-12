void func_001409f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001409f0: addiu $sp, $sp, -0x10
    v0 = 0x25 << 16;                                            // 0x001409fc: lui $v0, 0x25
    v0 = v0 + 0x5d80;                                           // 0x00140a00: addiu $v0, $v0, 0x5d80
    a2 = 4;                                                     // 0x00140a04: addiu $a2, $zero, 4
    v1 = *(int32_t*)(t1);                                       // 0x00140a08: lw $v1, 0($t1)
    g_00255d80 = a0;  // Global at 0x00255d80                   // 0x00140a10: sw $a0, 0($v0)
    a0 = 0x27;                                                  // 0x00140a14: addiu $a0, $zero, 0x27
    g_00255d84 = a1;  // Global at 0x00255d84                   // 0x00140a18: sw $a1, 4($v0)
    g_00255d88 = v1;  // Global at 0x00255d88                   // 0x00140a20: sw $v1, 8($v0)
    v1 = *(int32_t*)((t1) + 4);                                 // 0x00140a2c: lw $v1, 4($t1)
    g_00255d8c = v1;  // Global at 0x00255d8c                   // 0x00140a30: sw $v1, 0xc($v0)
    return func_00139228();  // Tail call                        // 0x00140a34: j 0x139120
    sp = sp + 0x10;                                             // 0x00140a38: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00140a3c: nop 
    sp = sp + -0x10;                                            // 0x00140a40: addiu $sp, $sp, -0x10
    v0 = 0x25 << 16;                                            // 0x00140a4c: lui $v0, 0x25
    v0 = v0 + 0x5d80;                                           // 0x00140a50: addiu $v0, $v0, 0x5d80
    a2 = 4;                                                     // 0x00140a54: addiu $a2, $zero, 4
    v1 = *(int32_t*)(t1);                                       // 0x00140a58: lw $v1, 0($t1)
    g_00255d80 = a0;  // Global at 0x00255d80                   // 0x00140a60: sw $a0, 0($v0)
    a0 = 0x28;                                                  // 0x00140a64: addiu $a0, $zero, 0x28
    g_00255d84 = a1;  // Global at 0x00255d84                   // 0x00140a68: sw $a1, 4($v0)
    g_00255d88 = v1;  // Global at 0x00255d88                   // 0x00140a70: sw $v1, 8($v0)
    v1 = *(int32_t*)((t1) + 4);                                 // 0x00140a7c: lw $v1, 4($t1)
    g_00255d8c = v1;  // Global at 0x00255d8c                   // 0x00140a80: sw $v1, 0xc($v0)
    return func_00139228();  // Tail call                        // 0x00140a84: j 0x139120
    sp = sp + 0x10;                                             // 0x00140a88: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00140a8c: nop 
    sp = sp + -0x10;                                            // 0x00140a90: addiu $sp, $sp, -0x10
    v0 = 0x25 << 16;                                            // 0x00140a94: lui $v0, 0x25
    s0 = 0x25 << 16;                                            // 0x00140a9c: lui $s0, 0x25
    v0 = v0 + 0x5d80;                                           // 0x00140aa0: addiu $v0, $v0, 0x5d80
    s0 = s0 + 0x5e80;                                           // 0x00140aa8: addiu $s0, $s0, 0x5e80
    g_00255d80 = a0;  // Global at 0x00255d80                   // 0x00140aac: sw $a0, 0($v0)
    g_00255d84 = a1;  // Global at 0x00255d84                   // 0x00140ab0: sw $a1, 4($v0)
    a0 = 0x29;                                                  // 0x00140abc: addiu $a0, $zero, 0x29
    a2 = 2;                                                     // 0x00140ac0: addiu $a2, $zero, 2
    func_00139228();  // 0x139120                                // 0x00140ac4: jal 0x139120
    t0 = 1;                                                     // 0x00140ac8: addiu $t0, $zero, 1
    v0 = g_00255e80;  // Global at 0x00255e80                   // 0x00140acc: lw $v0, 0($s0)
    return;                                                     // 0x00140ad8: jr $ra
    sp = sp + 0x10;                                             // 0x00140adc: addiu $sp, $sp, 0x10
}