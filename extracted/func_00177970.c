void func_00177970() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00177970: addiu $sp, $sp, -0x10
    a2 = 0x1c0;                                                 // 0x00177978: addiu $a2, $zero, 0x1c0
    func_00107c70();  // 107c70                                // 0x00177984: jal 0x107c70
    v1 = 1;                                                     // 0x0017798c: addiu $v1, $zero, 1
    v0 = 0xa;                                                   // 0x00177990: addiu $v0, $zero, 0xa
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x00177994: sw $v1, 0xc($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x00177998: sw $v0, 0x10($s0)
    *(uint32_t*)(s0) = v1;                                      // 0x001779a0: sw $v1, 0($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001779a4: sw $zero, 4($s0)
    func_00177a50();  // 177a50                                // 0x001779a8: jal 0x177a50
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x001779ac: sw $zero, 8($s0)
    v1 = 0xf << 16;                                             // 0x001779b4: lui $v1, 0xf
    v1 = v1 | 0x4240;                                           // 0x001779b8: ori $v1, $v1, 0x4240
    v0 = 1;                                                     // 0x001779bc: addiu $v0, $zero, 1
    a0 = 0x412b;                                                // 0x001779c0: addiu $a0, $zero, 0x412b
    a1 = 3 << 16;                                               // 0x001779c4: lui $a1, 3
    a1 = a1 | 0xd40;                                            // 0x001779c8: ori $a1, $a1, 0xd40
    a2 = -1;                                                    // 0x001779cc: addiu $a2, $zero, -1
    *(uint32_t*)((s0) + 0x1b8) = 0;                             // 0x001779e4: sw $zero, 0x1b8($s0)
    *(uint32_t*)((s0) + 0x190) = 0;                             // 0x00177a14: sw $zero, 0x190($s0)
    *(uint32_t*)((s0) + 0x194) = 0;                             // 0x00177a18: sw $zero, 0x194($s0)
    *(uint32_t*)((s0) + 0x198) = 0;                             // 0x00177a1c: sw $zero, 0x198($s0)
    *(uint32_t*)((s0) + 0x19c) = 0;                             // 0x00177a20: sw $zero, 0x19c($s0)
    *(uint32_t*)((s0) + 0x1a0) = 0;                             // 0x00177a24: sw $zero, 0x1a0($s0)
    *(uint32_t*)((s0) + 0x1a4) = 0;                             // 0x00177a28: sw $zero, 0x1a4($s0)
    *(uint32_t*)((s0) + 0x1a8) = 0;                             // 0x00177a2c: sw $zero, 0x1a8($s0)
    *(uint32_t*)((s0) + 0x1ac) = 0;                             // 0x00177a30: sw $zero, 0x1ac($s0)
    *(uint32_t*)((s0) + 0x1b0) = 0;                             // 0x00177a34: sw $zero, 0x1b0($s0)
    *(uint32_t*)((s0) + 0x1b4) = 0;                             // 0x00177a38: sw $zero, 0x1b4($s0)
    return func_00178260();  // Tail call                        // 0x00177a44: j 0x178100
    sp = sp + 0x10;                                             // 0x00177a48: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00177a4c: nop 
    sp = sp + -0x10;                                            // 0x00177a50: addiu $sp, $sp, -0x10
    a0 = s0 + 0x18;                                             // 0x00177a60: addiu $a0, $s0, 0x18
    func_00107c70();  // 107c70                                // 0x00177a68: jal 0x107c70
    a2 = 0xf0;                                                  // 0x00177a6c: addiu $a2, $zero, 0xf0
    v0 = *(int32_t*)((s0) + 0x19c);                             // 0x00177a70: lw $v0, 0x19c($s0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00177a74: sw $zero, 0x14($s0)
    v0 = v0 + 1;                                                // 0x00177a78: addiu $v0, $v0, 1
    *(uint32_t*)((s0) + 0x19c) = v0;                            // 0x00177a80: sw $v0, 0x19c($s0)
    return;                                                     // 0x00177a88: jr $ra
    sp = sp + 0x10;                                             // 0x00177a8c: addiu $sp, $sp, 0x10
}