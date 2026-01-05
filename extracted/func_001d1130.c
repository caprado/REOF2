void func_001d1130() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001d1130: addiu $sp, $sp, -0xa0
    /* FPU: dps.w.ph $ac0, $sp, $s6 */                          // 0x001d113c: dps.w.ph $ac0, $sp, $s6
    /* FPU: subu.qb $zero, $sp, $s4 */                          // 0x001d114c: subu.qb $zero, $sp, $s4
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x001d115c: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001d116c: addu.qb $zero, $sp, $s0
    v0 = *(int8_t*)(t3);                                        // 0x001d1174: lb $v0, 0($t3)
    t0 = str_00243ae0;  // "TCP&PPP DISCONNECTING...\n"         // 0x001d1180: lh $t0, 0($a3)
    t1 = *(int8_t*)(a0);                                        // 0x001d1184: lb $t1, 0($a0)
    t2 = *(int8_t*)(a1);                                        // 0x001d1188: lb $t2, 0($a1)
    t3 = *(int8_t*)(a2);                                        // 0x001d118c: lb $t3, 0($a2)
    a3 = 0x24 << 16;                                            // 0x001d1190: lui $a3, 0x24
    a0 = 1;                                                     // 0x001d1194: addiu $a0, $zero, 1
    a3 = &str_00243ae0;  // "TCP&PPP DISCONNECTING...\n"        // 0x001d1198: addiu $a3, $a3, 0x3ae0
    a1 = 0x1b;                                                  // 0x001d119c: addiu $a1, $zero, 0x1b
    func_001d09d0();  // 1d09d0                                // 0x001d11a0: jal 0x1d09d0
    v1 = *(int8_t*)(s5);                                        // 0x001d11a8: lb $v1, 0($s5)
    v0 = 0x22 << 16;                                            // 0x001d11ac: lui $v0, 0x22
    v0 = v0 + -0xbf8;                                           // 0x001d11b0: addiu $v0, $v0, -0xbf8
    v1 = v1 << 2;                                               // 0x001d11d0: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001d11d4: addu $v0, $v0, $v1
    v0 = g_0021f408;  // Global at 0x0021f408                   // 0x001d11d8: lw $v0, 0($v0)
    /* call function at address in v0 */                        // 0x001d11dc: jalr $v0
    /* FPU: xori.b $w2, $w0, 0xb7 */                            // 0x001d11e8: xori.b $w2, $w0, 0xb7
    /* FPU: ld.b $w1, -0x4b($zero) */                           // 0x001d11f0: ld.b $w1, -0x4b($zero)
    /* FPU: aver_u.h $w1, $w0, $w20 */                          // 0x001d11f4: aver_u.h $w1, $w0, $w20
    /* FPU: xori.b $w1, $w0, 0xb3 */                            // 0x001d11f8: xori.b $w1, $w0, 0xb3
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001d1200: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001d1204: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001d1208: jr $ra
    sp = sp + 0xa0;                                             // 0x001d120c: addiu $sp, $sp, 0xa0
}