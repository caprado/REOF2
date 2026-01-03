void func_00139560() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x50;                                            // 0x00139560: addiu $sp, $sp, -0x50
    if (s0 == 0) goto label_0x1395d4;                           // 0x00139574: beqz $s0, 0x1395d4
    func_0013a6c0();  // 13a6c0                                // 0x0013957c: jal 0x13a6c0
    v1 = 0x20 << 16;                                            // 0x00139584: lui $v1, 0x20
    v0 = local_4;                                               // 0x00139588: lw $v0, 4($sp)
    s1 = v1 + 0x3da0;                                           // 0x0013958c: addiu $s1, $v1, 0x3da0
    if (v0 != 0) goto label_0x1395d0;                           // 0x00139594: bnez $v0, 0x1395d0
    func_00139f08();  // 139f08                                // 0x0013959c: jal 0x139f08
    /* nop */                                                   // 0x001395a0: nop 
    func_00137ec8();  // 137ec8                                // 0x001395a4: jal 0x137ec8
    a0 = 0 | 0x8100;                                            // 0x001395a8: ori $a0, $zero, 0x8100
    func_00100d98();  // 100d98                                // 0x001395ac: jal 0x100d98
    func_00137ec8();  // 137ec8                                // 0x001395b4: jal 0x137ec8
    a0 = 0 | 0x8101;                                            // 0x001395b8: ori $a0, $zero, 0x8101
    func_001392e8();  // 1392e8                                // 0x001395c0: jal 0x1392e8
    if (v0 == 0) goto label_0x1395d8;                           // 0x001395c8: beqz $v0, 0x1395d8
label_0x1395d0:
    v0 = 1;                                                     // 0x001395d0: addiu $v0, $zero, 1
label_0x1395d4:
label_0x1395d8:
    return;                                                     // 0x001395e0: jr $ra
    sp = sp + 0x50;                                             // 0x001395e4: addiu $sp, $sp, 0x50
}