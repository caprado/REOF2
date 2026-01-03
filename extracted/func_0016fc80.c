void func_0016fc80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016fc80: addiu $sp, $sp, -0x30
    func_001701d8();  // 1701d8                                // 0x0016fca4: jal 0x1701d8
    s3 = *(int32_t*)((s1) + 0x1b30);                            // 0x0016fca8: lw $s3, 0x1b30($s1)
    v1 = 1;                                                     // 0x0016fcac: addiu $v1, $zero, 1
    a1 = s0 + 0x2c;                                             // 0x0016fcb0: addiu $a1, $s0, 0x2c
    *(uint32_t*)(v0) = v1;                                      // 0x0016fcb4: sw $v1, 0($v0)
    v0 = v0 + 4;                                                // 0x0016fcb8: addiu $v0, $v0, 4
    a0 = *(int32_t*)((a1) + 0x18);                              // 0x0016fcbc: lw $a0, 0x18($a1)
    v1 = *(int32_t*)(a1);                                       // 0x0016fcc0: lw $v1, 0($a1)
    *(uint32_t*)((v0) + 0x10) = a0;                             // 0x0016fcc4: sw $a0, 0x10($v0)
    *(uint32_t*)(v0) = v1;                                      // 0x0016fcc8: sw $v1, 0($v0)
    a3 = *(int32_t*)((s1) + 0x38);                              // 0x0016fccc: lw $a3, 0x38($s1)
    v1 = *(int32_t*)((a1) + 4);                                 // 0x0016fcd0: lw $v1, 4($a1)
    t0 = *(int32_t*)((s0) + 0x28);                              // 0x0016fcd4: lw $t0, 0x28($s0)
    *(uint32_t*)((v0) + 4) = v1;                                // 0x0016fcd8: sw $v1, 4($v0)
    a2 = *(int32_t*)((s0) + 8);                                 // 0x0016fcdc: lw $a2, 8($s0)
    v1 = *(int32_t*)((a1) + 8);                                 // 0x0016fce0: lw $v1, 8($a1)
    t1 = *(int32_t*)((a1) + 0x38);                              // 0x0016fce4: lw $t1, 0x38($a1)
    *(uint32_t*)((v0) + 8) = v1;                                // 0x0016fce8: sw $v1, 8($v0)
    *(uint32_t*)(s2) = v0;                                      // 0x0016fcec: sw $v0, 0($s2)
    v1 = *(int32_t*)((a1) + 0xc);                               // 0x0016fcf0: lw $v1, 0xc($a1)
    *(uint32_t*)((s3) + 0x70) = s0;                             // 0x0016fcf4: sw $s0, 0x70($s3)
    *(uint32_t*)((v0) + 0xc) = v1;                              // 0x0016fcf8: sw $v1, 0xc($v0)
    *(uint32_t*)((v0) + 0x1c) = a3;                             // 0x0016fcfc: sw $a3, 0x1c($v0)
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x0016fd00: lw $v1, 0xc($s0)
    *(uint32_t*)((v0) + 0x20) = a2;                             // 0x0016fd04: sw $a2, 0x20($v0)
    *(uint32_t*)((v0) + 0x14) = v1;                             // 0x0016fd08: sw $v1, 0x14($v0)
    *(uint32_t*)((v0) + 0x38) = t0;                             // 0x0016fd0c: sw $t0, 0x38($v0)
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x0016fd10: lw $v1, 0x10($s0)
    *(uint32_t*)((v0) + 0x18) = v1;                             // 0x0016fd14: sw $v1, 0x18($v0)
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x0016fd18: lw $a0, 0x14($s0)
    *(uint32_t*)((v0) + 0x24) = a0;                             // 0x0016fd1c: sw $a0, 0x24($v0)
    v1 = *(int32_t*)((s0) + 0x18);                              // 0x0016fd20: lw $v1, 0x18($s0)
    *(uint32_t*)((v0) + 0x28) = v1;                             // 0x0016fd24: sw $v1, 0x28($v0)
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x0016fd28: lw $a0, 0x1c($s0)
    *(uint32_t*)((v0) + 0x2c) = a0;                             // 0x0016fd2c: sw $a0, 0x2c($v0)
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x0016fd30: lw $v1, 0x20($s0)
    *(uint32_t*)((v0) + 0x30) = v1;                             // 0x0016fd34: sw $v1, 0x30($v0)
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0016fd38: lw $a0, 0x24($s0)
    *(uint32_t*)((v0) + 0x34) = a0;                             // 0x0016fd3c: sw $a0, 0x34($v0)
    v1 = *(int32_t*)((a1) + 0x40);                              // 0x0016fd40: lw $v1, 0x40($a1)
    a0 = *(int32_t*)((a1) + 0x50);                              // 0x0016fd44: lw $a0, 0x50($a1)
    *(uint32_t*)((v0) + 0x44) = v1;                             // 0x0016fd48: sw $v1, 0x44($v0)
    a2 = *(int32_t*)((a1) + 0x3c);                              // 0x0016fd4c: lw $a2, 0x3c($a1)
    v1 = *(int32_t*)((a1) + 0x44);                              // 0x0016fd50: lw $v1, 0x44($a1)
    a3 = *(int32_t*)((a1) + 0x4c);                              // 0x0016fd54: lw $a3, 0x4c($a1)
    *(uint32_t*)((v0) + 0x48) = v1;                             // 0x0016fd58: sw $v1, 0x48($v0)
    v1 = *(int32_t*)((a1) + 0x48);                              // 0x0016fd60: lw $v1, 0x48($a1)
    *(uint32_t*)((v0) + 0x3c) = t1;                             // 0x0016fd74: sw $t1, 0x3c($v0)
    *(uint32_t*)((v0) + 0x54) = a0;                             // 0x0016fd78: sw $a0, 0x54($v0)
    *(uint32_t*)((v0) + 0x40) = a2;                             // 0x0016fd7c: sw $a2, 0x40($v0)
    *(uint32_t*)((v0) + 0x4c) = v1;                             // 0x0016fd80: sw $v1, 0x4c($v0)
    *(uint32_t*)((v0) + 0x50) = a3;                             // 0x0016fd84: sw $a3, 0x50($v0)
    return;                                                     // 0x0016fd88: jr $ra
    sp = sp + 0x30;                                             // 0x0016fd8c: addiu $sp, $sp, 0x30
}