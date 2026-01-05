void func_001b3260() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_98;
    
    sp = sp + -0xc0;                                            // 0x001b3260: addiu $sp, $sp, -0xc0
    v1 = 5;                                                     // 0x001b3264: addiu $v1, $zero, 5
    v0 = (v1 < 8) ? 1 : 0;                                      // 0x001b326c: slti $v0, $v1, 8
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b3270: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b327c: addu.qb $zero, $sp, $s1
    local_98 = t0;                                              // 0x001b328c: sw $t0, 0x98($sp)
    if (v0 != 0) goto label_0x1b32ac;                           // 0x001b329c: bnez $v0, 0x1b32ac
    goto label_0x1b32b8;                                        // 0x001b32a4: b 0x1b32b8
label_0x1b32ac:
    v0 = 8;                                                     // 0x001b32ac: addiu $v0, $zero, 8
    v0 = v0 - v1;                                               // 0x001b32b0: subu $v0, $v0, $v1
    v1 = v0 << 3;                                               // 0x001b32b4: sll $v1, $v0, 3
label_0x1b32b8:
    a1 = local_98;                                              // 0x001b32b8: lw $a1, 0x98($sp)
    v0 = sp + 0xc0;                                             // 0x001b32bc: addiu $v0, $sp, 0xc0
    a0 = 0x2b << 16;                                            // 0x001b32c0: lui $a0, 0x2b
    a2 = v0 - v1;                                               // 0x001b32c4: subu $a2, $v0, $v1
    func_0010f528();  // 10f528                                // 0x001b32c8: jal 0x10f528
    a0 = a0 + -0x4bc0;                                          // 0x001b32cc: addiu $a0, $a0, -0x4bc0
    func_001b3490();  // 1b3490                                // 0x001b32d0: jal 0x1b3490
    a0 = s1 << 1;                                               // 0x001b32d8: sll $a0, $s1, 1
    v0 = gp + -0x7cf0;                                          // 0x001b32dc: addiu $v0, $gp, -0x7cf0
    v1 = v0 + a0;                                               // 0x001b32e0: addu $v1, $v0, $a0
    v0 = gp + -0x7cef;                                          // 0x001b32e4: addiu $v0, $gp, -0x7cef
    v0 = v0 + a0;                                               // 0x001b32e8: addu $v0, $v0, $a0
    a1 = *(uint8_t*)(v0);                                       // 0x001b32ec: lbu $a1, 0($v0)
    func_001b36e0();  // 1b36e0                                // 0x001b32f0: jal 0x1b36e0
    a0 = *(uint8_t*)(v1);                                       // 0x001b32f4: lbu $a0, 0($v1)
    func_001b3460();  // 1b3460                                // 0x001b32fc: jal 0x1b3460
    a0 = 0x2b << 16;                                            // 0x001b3304: lui $a0, 0x2b
    func_001b34f0();  // 1b34f0                                // 0x001b3308: jal 0x1b34f0
    a0 = a0 + -0x4bc0;                                          // 0x001b330c: addiu $a0, $a0, -0x4bc0
    a0 = 8;                                                     // 0x001b3310: addiu $a0, $zero, 8
    func_001b36e0();  // 1b36e0                                // 0x001b3314: jal 0x1b36e0
    func_001b3490();  // 1b3490                                // 0x001b331c: jal 0x1b3490
    a0 = -1;                                                    // 0x001b3320: addiu $a0, $zero, -1
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b332c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b3330: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b3334: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b3338: jr $ra
    sp = sp + 0xc0;                                             // 0x001b333c: addiu $sp, $sp, 0xc0
}