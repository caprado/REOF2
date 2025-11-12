void func_00158d30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00158d30: addiu $sp, $sp, -0x30
    func_0015b498();  // 0x15b470                                // 0x00158d50: jal 0x15b470
    a1 = 0xff03 << 16;                                          // 0x00158d58: lui $a1, 0xff03
    a2 = 0xcc;                                                  // 0x00158d5c: addiu $a2, $zero, 0xcc
    if (v0 == 0) goto label_0x158d88;                           // 0x00158d64: beqz $v0, 0x158d88
    a1 = a1 | 0x20a;                                            // 0x00158d68: ori $a1, $a1, 0x20a
    return func_00158c48();  // Tail call                        // 0x00158d80: j 0x158bf8
    sp = sp + 0x30;                                             // 0x00158d84: addiu $sp, $sp, 0x30
label_0x158d88:
    s1 = *(int32_t*)((s0) + 4);                                 // 0x00158d88: lw $s1, 4($s0)
    s0 = *(int32_t*)(s0);                                       // 0x00158d8c: lw $s0, 0($s0)
    func_00158518();  // 0x158410                                // 0x00158d94: jal 0x158410
    a1 = 0xff03 << 16;                                          // 0x00158da0: lui $a1, 0xff03
    s0 = v0 - s0;                                               // 0x00158da4: subu $s0, $v0, $s0
    if (v0 != 0) goto label_0x158db8;                           // 0x00158da8: bnez $v0, 0x158db8
    a1 = a1 | 0x305;                                            // 0x00158dac: ori $a1, $a1, 0x305
    goto label_0x158dc0;                                        // 0x00158db0: b 0x158dc0
    *(uint32_t*)(s3) = s1;                                      // 0x00158db4: sw $s1, 0($s3)
label_0x158db8:
    *(uint32_t*)(s3) = s0;                                      // 0x00158db8: sw $s0, 0($s3)
label_0x158dc0:
    return func_00158c48();  // Tail call                        // 0x00158dd4: j 0x158bf8
    sp = sp + 0x30;                                             // 0x00158dd8: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x00158ddc: nop 
    return;                                                     // 0x00158de0: jr $ra
    /* nop */                                                   // 0x00158de4: nop 
}