void func_00133150() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14, local_18;
    
    sp = sp + -0x40;                                            // 0x00133150: addiu $sp, $sp, -0x40
    if (s0 != 0) goto label_0x133188;                           // 0x0013316c: bnez $s0, 0x133188
    a0 = 0x22 << 16;                                            // 0x00133174: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x00133178: jal 0x127d90
    a0 = &str_00223df8;  // "E8101202 ADXT_StartAfs: can't open " // 0x0013317c: addiu $a0, $a0, 0x3df8
    goto label_0x13322c;                                        // 0x00133180: b 0x13322c
label_0x133188:
    func_00131bb8();  // 0x131af8                                // 0x00133188: jal 0x131af8
    /* nop */                                                   // 0x0013318c: nop 
    a2 = *(int32_t*)((s0) + 0xb0);                              // 0x00133194: lw $a2, 0xb0($s0)
    a3 = sp + 0x10;                                             // 0x0013319c: addiu $a3, $sp, 0x10
    t0 = sp + 0x14;                                             // 0x001331a0: addiu $t0, $sp, 0x14
    func_00129c30();  // 0x129ad8                                // 0x001331a4: jal 0x129ad8
    t1 = sp + 0x18;                                             // 0x001331a8: addiu $t1, $sp, 0x18
    /* bnezl $v0, 0x13322c */                                   // 0x001331ac: bnezl $v0, 0x13322c
    v0 = *(int32_t*)((s0) + 8);                                 // 0x001331b4: lw $v0, 8($s0)
    if (v0 != 0) goto label_0x1331f8;                           // 0x001331b8: bnez $v0, 0x1331f8
    v1 = local_10;                                              // 0x001331bc: lw $v1, 0x10($sp)
    func_00127fe8();  // 0x127f60                                // 0x001331cc: jal 0x127f60
    a3 = 0x10;                                                  // 0x001331d0: addiu $a3, $zero, 0x10
    a0 = 0x22 << 16;                                            // 0x001331d4: lui $a0, 0x22
    a0 = &str_00223e28;  // "E02080807 ADXT_StartFname: parameter error" // 0x001331d8: addiu $a0, $a0, 0x3e28
    func_00127e58();  // 0x127de8                                // 0x001331dc: jal 0x127de8
    v0 = -1;                                                    // 0x001331e4: addiu $v0, $zero, -1
    v1 = 6;                                                     // 0x001331e8: addiu $v1, $zero, 6
    *(uint16_t*)((s0) + 0x60) = v0;                             // 0x001331ec: sh $v0, 0x60($s0)
    goto label_0x133228;                                        // 0x001331f0: b 0x133228
    *(uint8_t*)((s0) + 1) = v1;                                 // 0x001331f4: sb $v1, 1($s0)
label_0x1331f8:
    v0 = 1;                                                     // 0x001331f8: addiu $v0, $zero, 1
    a0 = local_14;                                              // 0x001331fc: lw $a0, 0x14($sp)
    a1 = local_18;                                              // 0x00133200: lw $a1, 0x18($sp)
    a2 = *(int32_t*)((s0) + 0xb0);                              // 0x00133204: lw $a2, 0xb0($s0)
    *(uint32_t*)((s0) + 0xb8) = v1;                             // 0x00133208: sw $v1, 0xb8($s0)
    *(uint32_t*)((s0) + 0xb4) = a2;                             // 0x0013320c: sw $a2, 0xb4($s0)
    *(uint32_t*)((s0) + 0xbc) = a0;                             // 0x00133210: sw $a0, 0xbc($s0)
    *(uint32_t*)((s0) + 0xc0) = a1;                             // 0x00133214: sw $a1, 0xc0($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x00133218: sb $v0, 2($s0)
    *(uint8_t*)((s0) + 0x98) = 0;                               // 0x0013321c: sb $zero, 0x98($s0)
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x00133220: sb $v0, 1($s0)
    *(uint8_t*)((s0) + 0xac) = v0;                              // 0x00133224: sb $v0, 0xac($s0)
label_0x133228:
label_0x13322c:
    return;                                                     // 0x00133238: jr $ra
    sp = sp + 0x40;                                             // 0x0013323c: addiu $sp, $sp, 0x40
}