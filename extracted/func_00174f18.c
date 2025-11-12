void func_00174f18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00174f18: addiu $sp, $sp, -0x10
    s0 = *(int32_t*)((a0) + 0x2ab0);                            // 0x00174f24: lw $s0, 0x2ab0($a0)
    v0 = *(int32_t*)((s0) + 0xdbc);                             // 0x00174f28: lw $v0, 0xdbc($s0)
    if (v0 > 0) goto label_0x174f8c;                            // 0x00174f2c: bgtzl $v0, 0x174f8c
    *(uint32_t*)((s0) + 0xd94) = v0;                            // 0x00174f30: sw $v0, 0xd94($s0)
    a0 = *(int32_t*)((s0) + 0xdb0);                             // 0x00174f34: lw $a0, 0xdb0($s0)
    a2 = *(int32_t*)((s0) + 0xdb4);                             // 0x00174f38: lw $a2, 0xdb4($s0)
    if (a0 <= 0) goto label_0x174f4c;                           // 0x00174f3c: blez $a0, 0x174f4c
    a1 = *(int32_t*)((s0) + 0xdb8);                             // 0x00174f40: lw $a1, 0xdb8($s0)
    if (a2 > 0) goto label_0x174f80;                            // 0x00174f44: bgtz $a2, 0x174f80
    /* nop */                                                   // 0x00174f48: nop 
label_0x174f4c:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00174f4c: lw $v0, 4($s0)
    if (v0 > 0) goto label_0x174f8c;                            // 0x00174f50: bgtzl $v0, 0x174f8c
    *(uint32_t*)((s0) + 0xd94) = v0;                            // 0x00174f54: sw $v0, 0xd94($s0)
    if (a0 <= 0) goto label_0x174f60;                           // 0x00174f58: blezl $a0, 0x174f60
    a0 = *(int32_t*)((s0) + 0xd98);                             // 0x00174f5c: lw $a0, 0xd98($s0)
label_0x174f60:
    if (a2 > 0) goto label_0x174f70;                            // 0x00174f60: bgtz $a2, 0x174f70
    /* nop */                                                   // 0x00174f64: nop 
    a2 = *(int32_t*)((s0) + 0xd9c);                             // 0x00174f68: lw $a2, 0xd9c($s0)
    a1 = *(int32_t*)((s0) + 0xda0);                             // 0x00174f6c: lw $a1, 0xda0($s0)
label_0x174f70:
    if (a0 <= 0) goto label_0x174f8c;                           // 0x00174f70: blezl $a0, 0x174f8c
    *(uint32_t*)((s0) + 0xd94) = v0;                            // 0x00174f74: sw $v0, 0xd94($s0)
    if (a2 <= 0) goto label_0x174f8c;                           // 0x00174f78: blezl $a2, 0x174f8c
    *(uint32_t*)((s0) + 0xd94) = v0;                            // 0x00174f7c: sw $v0, 0xd94($s0)
label_0x174f80:
    func_0015b7b0();  // 0x15b740                                // 0x00174f80: jal 0x15b740
    /* nop */                                                   // 0x00174f84: nop 
    *(uint32_t*)((s0) + 0xd94) = v0;                            // 0x00174f88: sw $v0, 0xd94($s0)
label_0x174f8c:
    return;                                                     // 0x00174f94: jr $ra
    sp = sp + 0x10;                                             // 0x00174f98: addiu $sp, $sp, 0x10
}