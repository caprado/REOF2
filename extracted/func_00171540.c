void func_00171540() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x30;                                            // 0x00171540: addiu $sp, $sp, -0x30
    a2 = sp + 4;                                                // 0x00171554: addiu $a2, $sp, 4
    a3 = sp + 8;                                                // 0x00171558: addiu $a3, $sp, 8
    t0 = sp + 0xc;                                              // 0x00171560: addiu $t0, $sp, 0xc
    func_00170960();  // 170960                                // 0x0017156c: jal 0x170960
    a0 = local_0;                                               // 0x00171574: lw $a0, 0($sp)
    v0 = 0xfff << 16;                                           // 0x00171578: lui $v0, 0xfff
    a2 = local_8;                                               // 0x0017157c: lw $a2, 8($sp)
    v0 = v0 | 0xffff;                                           // 0x00171580: ori $v0, $v0, 0xffff
    v1 = 0x2000 << 16;                                          // 0x00171584: lui $v1, 0x2000
    a1 = local_4;                                               // 0x00171588: lw $a1, 4($sp)
    a3 = local_c;                                               // 0x0017158c: lw $a3, 0xc($sp)
    a0 = a0 & v0;                                               // 0x00171590: and $a0, $a0, $v0
    a2 = a2 & v0;                                               // 0x00171594: and $a2, $a2, $v0
    a0 = a0 | v1;                                               // 0x001715a0: or $a0, $a0, $v1
    a2 = a2 | v1;                                               // 0x001715a4: or $a2, $a2, $v1
    func_001718a0();  // 1718a0                                // 0x001715ac: jal 0x1718a0
    func_00170a50();  // 170a50                                // 0x001715bc: jal 0x170a50
    return;                                                     // 0x001715d8: jr $ra
    sp = sp + 0x30;                                             // 0x001715dc: addiu $sp, $sp, 0x30
}