void func_00185048() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x300;                                           // 0x00185048: addiu $sp, $sp, -0x300
    func_00183fa0();  // 183fa0                                // 0x0018506c: jal 0x183fa0
    if (s0 != 0) goto label_0x18511c;                           // 0x00185078: bnez $s0, 0x18511c
    s3 = sp + 0x220;                                            // 0x00185080: addiu $s3, $sp, 0x220
    func_00184048();  // 184048                                // 0x0018508c: jal 0x184048
    if (s0 != 0) goto label_0x18511c;                           // 0x00185098: bnez $s0, 0x18511c
    func_00184320();  // 184320                                // 0x001850b4: jal 0x184320
    v1 = 0x8101 << 16;                                          // 0x001850bc: lui $v1, 0x8101
    v1 = v1 | 0x11;                                             // 0x001850c0: ori $v1, $v1, 0x11
    a0 = v0 ^ v1;                                               // 0x001850c4: xor $a0, $v0, $v1
    if (s2 == 0) goto label_0x185114;                           // 0x001850c8: beqz $s2, 0x185114
    if (a0 != 0) s0 = v0;                                       // 0x001850cc: movn $s0, $v0, $a0
    if (s0 != 0) goto label_0x185118;                           // 0x001850d0: bnez $s0, 0x185118
    a0 = s2 + 0x18;                                             // 0x001850d8: addiu $a0, $s2, 0x18
    func_0010ac68();  // 10ac68                                // 0x001850dc: jal 0x10ac68
    a1 = sp + 0x40;                                             // 0x001850e0: addiu $a1, $sp, 0x40
    v1 = local_4;                                               // 0x001850e4: lw $v1, 4($sp)
    v0 = local_0;                                               // 0x001850e8: lhu $v0, 0($sp)
    *(uint16_t*)((s2) + 0x14) = v0;                             // 0x0018510c: sh $v0, 0x14($s2)
    *(uint32_t*)((s2) + 0x10) = v1;                             // 0x00185110: sw $v1, 0x10($s2)
label_0x185114:
label_0x185118:
label_0x18511c:
    return;                                                     // 0x00185130: jr $ra
    sp = sp + 0x300;                                            // 0x00185134: addiu $sp, $sp, 0x300
}