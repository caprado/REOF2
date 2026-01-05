void func_001b8380() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b8380: addiu $sp, $sp, -0x10
    t0 = 1;                                                     // 0x001b8384: addiu $t0, $zero, 1
    v1 = *(uint8_t*)((a0) + 2);                                 // 0x001b838c: lbu $v1, 2($a0)
    if (v1 != t0) goto label_0x1b83e0;                          // 0x001b8390: bne $v1, $t0, 0x1b83e0
    /* nop */                                                   // 0x001b8394: nop 
    v1 = *(uint8_t*)((a0) + 0x1177);                            // 0x001b8398: lbu $v1, 0x1177($a0)
    if (v1 != 0) goto label_0x1b83e0;                           // 0x001b839c: bnez $v1, 0x1b83e0
    /* nop */                                                   // 0x001b83a0: nop 
    a2 = *(uint8_t*)((a0) + 3);                                 // 0x001b83a4: lbu $a2, 3($a0)
    v1 = 9;                                                     // 0x001b83a8: addiu $v1, $zero, 9
    t2 = *(uint16_t*)((a0) + 0xbc8);                            // 0x001b83ac: lhu $t2, 0xbc8($a0)
    v0 = 0x72 << 16;                                            // 0x001b83b0: lui $v0, 0x72
    a3 = a0 + 0x38;                                             // 0x001b83b4: addiu $a3, $a0, 0x38
    v0 = v0 + 0x4131;                                           // 0x001b83b8: addiu $v0, $v0, 0x4131
    a2 = v1 - a2;                                               // 0x001b83c0: subu $a2, $v1, $a2
    v1 = t2 << 2;                                               // 0x001b83c4: sll $v1, $t2, 2
    v1 = v1 + t2;                                               // 0x001b83c8: addu $v1, $v1, $t2
    v1 = v1 << 2;                                               // 0x001b83cc: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001b83d0: addu $v0, $v0, $v1
    t2 = g_00724131;  // Global at 0x00724131                   // 0x001b83d4: lbu $t2, 0($v0)
    func_001b8b40();  // 1b8b40                                // 0x001b83d8: jal 0x1b8b40
    a0 = 0xd;                                                   // 0x001b83dc: addiu $a0, $zero, 0xd
label_0x1b83e0:
    return;                                                     // 0x001b83e4: jr $ra
    sp = sp + 0x10;                                             // 0x001b83e8: addiu $sp, $sp, 0x10
}