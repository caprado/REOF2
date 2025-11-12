void func_00157e18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00157e18: addiu $sp, $sp, -0x20
    v0 = 0x21 << 16;                                            // 0x00157e1c: lui $v0, 0x21
    v1 = g_00213e70;  // Global at 0x00213e70                   // 0x00157e20: lw $v1, 0x3e70($v0)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x00157e34: lw $v0, 0xc($v1)
    if (v0 <= 0) goto label_0x157e70;                           // 0x00157e38: blez $v0, 0x157e70
    a0 = v1 + 0x10;                                             // 0x00157e3c: addiu $a0, $v1, 0x10
    s2 = 1;                                                     // 0x00157e48: addiu $s2, $zero, 1
    /* nop */                                                   // 0x00157e4c: nop 
label_0x157e50:
    v0 = *(int32_t*)(s0);                                       // 0x00157e50: lw $v0, 0($s0)
    if (v0 == s2) goto label_0x157e68;                          // 0x00157e54: beql $v0, $s2, 0x157e68
    s1 = s1 + -1;                                               // 0x00157e58: addiu $s1, $s1, -1
    func_00158278();  // 0x158228                                // 0x00157e5c: jal 0x158228
    s1 = s1 + -1;                                               // 0x00157e64: addiu $s1, $s1, -1
label_0x157e68:
    if (s1 != 0) goto label_0x157e50;                           // 0x00157e68: bnez $s1, 0x157e50
    s0 = s0 + 0xc0;                                             // 0x00157e6c: addiu $s0, $s0, 0xc0
label_0x157e70:
    func_00156068();  // 0x156060                                // 0x00157e70: jal 0x156060
    /* nop */                                                   // 0x00157e74: nop 
    return func_00157a88();  // Tail call                       // 0x00157e88: j 0x157a88
    sp = sp + 0x20;                                             // 0x00157e8c: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x00157e90: addiu $sp, $sp, -0x10
    goto label_0x157ea8;                                        // 0x00157e9c: j 0x157ea8
    sp = sp + 0x10;                                             // 0x00157ea0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00157ea4: nop 
label_0x157ea8:
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x00157ea8: sw $zero, 8($a0)
    *(uint32_t*)(a0) = 0;                                       // 0x00157eac: sw $zero, 0($a0)
    return;                                                     // 0x00157eb0: jr $ra
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x00157eb4: sw $zero, 4($a0)
}