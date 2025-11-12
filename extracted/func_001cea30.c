void func_001cea30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_17c;
    
    sp = sp + -0x180;                                           // 0x001cea30: addiu $sp, $sp, -0x180
    v0 = 0xfb;                                                  // 0x001cea34: addiu $v0, $zero, 0xfb
    v1 = sp + 0x80;                                             // 0x001cea3c: addiu $v1, $sp, 0x80
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001cea44: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001cea50: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cea60: addu.qb $zero, $sp, $s1
    if (v1 == 0) goto label_0x1cea90;                           // 0x001cea6c: beqz $v1, 0x1cea90
label_0x1cea74:
    *(uint8_t*)(v1) = 0;                                        // 0x001cea74: sb $zero, 0($v1)
    v0 = v0 + -1;                                               // 0x001cea78: addiu $v0, $v0, -1
    v1 = v1 + 1;                                                // 0x001cea7c: addiu $v1, $v1, 1
    /* nop */                                                   // 0x001cea80: nop 
    /* nop */                                                   // 0x001cea84: nop 
    if (v0 != 0) goto label_0x1cea74;                           // 0x001cea88: bnez $v0, 0x1cea74
    /* nop */                                                   // 0x001cea8c: nop 
label_0x1cea90:
    func_0010af38();  // 0x10ae00                                // 0x001cea90: jal 0x10ae00
    v0 = s3 + v0;                                               // 0x001cea9c: addu $v0, $s3, $v0
    v0 = v0 + 1;                                                // 0x001ceaa0: addiu $v0, $v0, 1
    v0 = ((unsigned)v0 < (unsigned)0xfb) ? 1 : 0;               // 0x001ceaa4: sltiu $v0, $v0, 0xfb
    if (v0 != 0) goto label_0x1ceab8;                           // 0x001ceaa8: bnez $v0, 0x1ceab8
    a0 = sp + 0x80;                                             // 0x001ceaac: addiu $a0, $sp, 0x80
    goto label_0x1ceb9c;                                        // 0x001ceab0: b 0x1ceb9c
    v0 = -1;                                                    // 0x001ceab4: addiu $v0, $zero, -1
label_0x1ceab8:
    func_00107d30();  // 0x107c70                                // 0x001ceabc: jal 0x107c70
    a2 = 0xfb;                                                  // 0x001ceac0: addiu $a2, $zero, 0xfb
    a0 = sp + 0x80;                                             // 0x001ceac8: addiu $a0, $sp, 0x80
    func_00107b68();  // 0x107ab8                                // 0x001ceacc: jal 0x107ab8
    s4 = s5 + 1;                                                // 0x001cead4: addiu $s4, $s5, 1
    v0 = s4 + sp;                                               // 0x001ceadc: addu $v0, $s4, $sp
    func_00107b68();  // 0x107ab8                                // 0x001ceae4: jal 0x107ab8
    a0 = v0 + 0x80;                                             // 0x001ceae8: addiu $a0, $v0, 0x80
    if (s1 != 0) goto label_0x1ceafc;                           // 0x001ceaec: bnez $s1, 0x1ceafc
    s4 = s4 + s3;                                               // 0x001ceaf0: addu $s4, $s4, $s3
    v0 = 0x7fff << 16;                                          // 0x001ceaf4: lui $v0, 0x7fff
    s1 = v0 | 0xffff;                                           // 0x001ceaf8: ori $s1, $v0, 0xffff
label_0x1ceafc:
    goto label_0x1ceb74;                                        // 0x001ceafc: b 0x1ceb74
label_0x1ceb04:
    /* nop */                                                   // 0x001ceb04: nop 
    /* nop */                                                   // 0x001ceb08: nop 
    /* nop */                                                   // 0x001ceb0c: nop 
    /* nop */                                                   // 0x001ceb10: nop 
    /* nop */                                                   // 0x001ceb14: nop 
    /* nop */                                                   // 0x001ceb18: nop 
    /* nop */                                                   // 0x001ceb1c: nop 
label_0x1ceb20:
    a0 = *(int32_t*)((gp) + -0x6564);                           // 0x001ceb20: lw $a0, -0x6564($gp)
    a2 = sp + 0x80;                                             // 0x001ceb28: addiu $a2, $sp, 0x80
    func_0011c478();  // 0x11c458                                // 0x001ceb2c: jal 0x11c458
    a3 = sp + 0x17c;                                            // 0x001ceb30: addiu $a3, $sp, 0x17c
    if (v0 < 0) goto label_0x1ceb04;                            // 0x001ceb34: bltz $v0, 0x1ceb04
    /* nop */                                                   // 0x001ceb38: nop 
    s0 = local_17c;                                             // 0x001ceb3c: lw $s0, 0x17c($sp)
    /* nop */                                                   // 0x001ceb40: nop 
    /* nop */                                                   // 0x001ceb44: nop 
    /* nop */                                                   // 0x001ceb48: nop 
    /* nop */                                                   // 0x001ceb4c: nop 
    /* nop */                                                   // 0x001ceb50: nop 
    /* nop */                                                   // 0x001ceb54: nop 
    /* nop */                                                   // 0x001ceb58: nop 
    v1 = -4;                                                    // 0x001ceb5c: addiu $v1, $zero, -4
    v0 = -4;                                                    // 0x001ceb60: addiu $v0, $zero, -4
    v1 = s0 & v1;                                               // 0x001ceb64: and $v1, $s0, $v1
    if (v1 != v0) goto label_0x1ceb80;                          // 0x001ceb68: bne $v1, $v0, 0x1ceb80
    /* nop */                                                   // 0x001ceb6c: nop 
    s3 = s3 + 1;                                                // 0x001ceb70: addiu $s3, $s3, 1
label_0x1ceb74:
    v0 = (s3 < s1) ? 1 : 0;                                     // 0x001ceb74: slt $v0, $s3, $s1
    if (v0 != 0) goto label_0x1ceb20;                           // 0x001ceb78: bnez $v0, 0x1ceb20
    /* nop */                                                   // 0x001ceb7c: nop 
label_0x1ceb80:
    if (s2 == 0) goto label_0x1ceb9c;                           // 0x001ceb80: beqz $s2, 0x1ceb9c
    v0 = -8;                                                    // 0x001ceb88: addiu $v0, $zero, -8
    v0 = s0 & v0;                                               // 0x001ceb8c: and $v0, $s0, $v0
    v0 = (unsigned)v0 >> 3;                                     // 0x001ceb90: srl $v0, $v0, 3
    *(uint32_t*)(s2) = v0;                                      // 0x001ceb94: sw $v0, 0($s2)
label_0x1ceb9c:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001ceba0: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001ceba4: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001ceba8: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cebb0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cebb4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cebb8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cebbc: jr $ra
    sp = sp + 0x180;                                            // 0x001cebc0: addiu $sp, $sp, 0x180
}