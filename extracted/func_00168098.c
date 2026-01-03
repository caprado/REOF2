void func_00168098() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x00168098: addiu $sp, $sp, -0x30
    func_00168150();  // 168150                                // 0x001680b8: jal 0x168150
    if (v1 == 0) goto label_0x168138;                           // 0x001680c4: beqz $v1, 0x168138
    a0 = -1;                                                    // 0x001680c8: addiu $a0, $zero, -1
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001680cc: sw $v1, 0x10($s0)
    if (v1 == a0) goto label_0x168138;                          // 0x001680d0: beq $v1, $a0, 0x168138
    v0 = 1;                                                     // 0x001680d4: addiu $v0, $zero, 1
    v1 = local_0;                                               // 0x001680d8: lw $v1, 0($sp)
    if (v1 <= 0) goto label_0x1680f8;                           // 0x001680dc: blez $v1, 0x1680f8
    v0 = v1 << 1;                                               // 0x001680e0: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x001680e4: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x001680e8: sll $v0, $v0, 3
    v0 = v0 + v1;                                               // 0x001680ec: addu $v0, $v0, $v1
    v0 = v0 << 1;                                               // 0x001680f0: sll $v0, $v0, 1
    *(uint32_t*)((s0) + 0x1c) = v0;                             // 0x001680f4: sw $v0, 0x1c($s0)
label_0x1680f8:
    v0 = 0x23 << 16;                                            // 0x001680f8: lui $v0, 0x23
    v0 = v0 + -0x6f68;                                          // 0x00168100: addiu $v0, $v0, -0x6f68
    *(uint32_t*)((s0) + 4) = v0;                                // 0x00168108: sw $v0, 4($s0)
    func_001682d0();  // 1682d0                                // 0x0016810c: jal 0x1682d0
    func_001683d8();  // 1683d8                                // 0x0016811c: jal 0x1683d8
    func_00168a80();  // 168a80                                // 0x0016812c: jal 0x168a80
    v0 = 1;                                                     // 0x00168134: addiu $v0, $zero, 1
label_0x168138:
    return;                                                     // 0x00168148: jr $ra
    sp = sp + 0x30;                                             // 0x0016814c: addiu $sp, $sp, 0x30
}