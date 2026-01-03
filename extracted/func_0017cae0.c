void func_0017cae0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017cae0: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x0017cae4: lui $v0, 0x21
    s0 = v0 + 0x5898;                                           // 0x0017caec: addiu $s0, $v0, 0x5898
    v1 = g_00215898;  // Global at 0x00215898                   // 0x0017caf0: lw $v1, 0($s0)
    if (v1 > 0) goto label_0x17cb40;                            // 0x0017caf4: bgtz $v1, 0x17cb40
    func_0017cb50();  // 17cb50                                // 0x0017cafc: jal 0x17cb50
    /* nop */                                                   // 0x0017cb00: nop 
    v1 = 0x26 << 16;                                            // 0x0017cb04: lui $v1, 0x26
    v1 = v1 + 0x78c8;                                           // 0x0017cb08: addiu $v1, $v1, 0x78c8
    func_0017cb60();  // 17cb60                                // 0x0017cb0c: jal 0x17cb60
    g_002678c8 = v0;  // Global at 0x002678c8                   // 0x0017cb10: sw $v0, 0($v1)
    func_0017d2f8();  // 17d2f8                                // 0x0017cb14: jal 0x17d2f8
    /* nop */                                                   // 0x0017cb18: nop 
    func_0017d3a8();  // 17d3a8                                // 0x0017cb1c: jal 0x17d3a8
    /* nop */                                                   // 0x0017cb20: nop 
    func_0017a2e0();  // 17a2e0                                // 0x0017cb24: jal 0x17a2e0
    /* nop */                                                   // 0x0017cb28: nop 
    v0 = g_00215898;  // Global at 0x00215898                   // 0x0017cb2c: lw $v0, 0($s0)
    v1 = 0x21 << 16;                                            // 0x0017cb30: lui $v1, 0x21
    g_0021589c = 0;  // Global at 0x0021589c                    // 0x0017cb34: sw $zero, 0x589c($v1)
    v0 = v0 + 1;                                                // 0x0017cb38: addiu $v0, $v0, 1
    g_00215898 = v0;  // Global at 0x00215898                   // 0x0017cb3c: sw $v0, 0($s0)
label_0x17cb40:
    return;                                                     // 0x0017cb48: jr $ra
    sp = sp + 0x10;                                             // 0x0017cb4c: addiu $sp, $sp, 0x10
}