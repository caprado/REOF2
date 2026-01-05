void func_00124520() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00124520: addiu $sp, $sp, -0x30
    t0 = 0x1f << 16;                                            // 0x00124524: lui $t0, 0x1f
    v1 = t0 + 0x1f58;                                           // 0x0012454c: addiu $v1, $t0, 0x1f58
    v0 = g_001f1f58;  // Global at 0x001f1f58                   // 0x00124554: lh $v0, 0($v1)
    if (v0 == 0) goto label_0x12458c;                           // 0x00124558: beqz $v0, 0x12458c
    a3 = a3 + 1;                                                // 0x00124560: addiu $a3, $a3, 1
    /* nop */                                                   // 0x00124564: nop 
    v0 = (a3 < 0x10) ? 1 : 0;                                   // 0x00124568: slti $v0, $a3, 0x10
    if (v0 == 0) goto label_0x12458c;                           // 0x0012456c: beqz $v0, 0x12458c
    v1 = v1 + 0xe4;                                             // 0x00124570: addiu $v1, $v1, 0xe4
    v0 = g_001f203c;  // Global at 0x001f203c                   // 0x00124574: lh $v0, 0($v1)
    /* nop */                                                   // 0x00124578: nop 
    /* nop */                                                   // 0x0012457c: nop 
    /* nop */                                                   // 0x00124580: nop 
    /* bnezl $v0, 0x124568 */                                   // 0x00124584: bnezl $v0, 0x124568
    a3 = a3 + 1;                                                // 0x00124588: addiu $a3, $a3, 1
label_0x12458c:
    v1 = 0x10;                                                  // 0x0012458c: addiu $v1, $zero, 0x10
    if (a3 == v1) goto label_0x124640;                          // 0x00124590: beq $a3, $v1, 0x124640
    v0 = a3 << 3;                                               // 0x00124598: sll $v0, $a3, 3
    v1 = t0 + 0x1f58;                                           // 0x0012459c: addiu $v1, $t0, 0x1f58
    v0 = v0 - a3;                                               // 0x001245a0: subu $v0, $v0, $a3
    v0 = v0 << 3;                                               // 0x001245a8: sll $v0, $v0, 3
    a2 = 0xe4;                                                  // 0x001245ac: addiu $a2, $zero, 0xe4
    v0 = v0 + a3;                                               // 0x001245b0: addu $v0, $v0, $a3
    v0 = v0 << 2;                                               // 0x001245b4: sll $v0, $v0, 2
    s0 = v0 + v1;                                               // 0x001245b8: addu $s0, $v0, $v1
    func_00107c70();  // 107c70                                // 0x001245bc: jal 0x107c70
    v1 = 1;                                                     // 0x001245c4: addiu $v1, $zero, 1
    func_00134aa0();  // 134aa0                                // 0x001245c8: jal 0x134aa0
    *(uint16_t*)(s0) = v1;                                      // 0x001245cc: sh $v1, 0($s0)
    if (v0 != 0) goto label_0x1245e8;                           // 0x001245d0: bnez $v0, 0x1245e8
    *(uint32_t*)((s0) + 8) = v0;                                // 0x001245d4: sw $v0, 8($s0)
    func_00124660();  // 124660                                // 0x001245d8: jal 0x124660
    goto label_0x124640;                                        // 0x001245e0: b 0x124640
label_0x1245e8:
    v0 = 0x12 << 16;                                            // 0x001245e8: lui $v0, 0x12
    v1 = 0x12 << 16;                                            // 0x001245ec: lui $v1, 0x12
    a3 = -0x80;                                                 // 0x001245f0: addiu $a3, $zero, -0x80
    v0 = v0 + 0x44d0;                                           // 0x001245f4: addiu $v0, $v0, 0x44d0
    v1 = v1 + 0x4500;                                           // 0x001245f8: addiu $v1, $v1, 0x4500
    *(uint32_t*)((s0) + 0x38) = s4;                             // 0x001245fc: sw $s4, 0x38($s0)
    *(uint32_t*)((s0) + 0x3c) = s3;                             // 0x00124600: sw $s3, 0x3c($s0)
    a0 = s0 + 0xcc;                                             // 0x00124604: addiu $a0, $s0, 0xcc
    *(uint32_t*)((s0) + 0x40) = s1;                             // 0x00124608: sw $s1, 0x40($s0)
    *(uint32_t*)((s0) + 0x44) = s2;                             // 0x00124610: sw $s2, 0x44($s0)
    a2 = 0x10;                                                  // 0x00124614: addiu $a2, $zero, 0x10
    *(uint32_t*)((s0) + 0x78) = v0;                             // 0x00124618: sw $v0, 0x78($s0)
    *(uint32_t*)((s0) + 0x80) = v1;                             // 0x0012461c: sw $v1, 0x80($s0)
    *(uint16_t*)((s0) + 0xe0) = a3;                             // 0x00124620: sh $a3, 0xe0($s0)
    *(uint32_t*)((s0) + 0x7c) = s0;                             // 0x00124624: sw $s0, 0x7c($s0)
    *(uint32_t*)((s0) + 0x84) = s0;                             // 0x00124628: sw $s0, 0x84($s0)
    *(uint32_t*)((s0) + 0xc8) = 0;                              // 0x0012462c: sw $zero, 0xc8($s0)
    *(uint16_t*)((s0) + 0xdc) = 0;                              // 0x00124630: sh $zero, 0xdc($s0)
    func_00107c70();  // 107c70                                // 0x00124634: jal 0x107c70
    *(uint16_t*)((s0) + 0xde) = a3;                             // 0x00124638: sh $a3, 0xde($s0)
label_0x124640:
    return;                                                     // 0x00124658: jr $ra
    sp = sp + 0x30;                                             // 0x0012465c: addiu $sp, $sp, 0x30
}