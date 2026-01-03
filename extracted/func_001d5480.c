void func_001d5480() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d5480: addiu $sp, $sp, -0x20
    func_001d5410();  // 1d5410                                // 0x001d5494: jal 0x1d5410
    if (v0 == 0) goto label_0x1d54cc;                           // 0x001d549c: beqz $v0, 0x1d54cc
    a0 = *(uint8_t*)((v0) + 0xf);                               // 0x001d54a4: lbu $a0, 0xf($v0)
    v1 = ~a3;                                                   // 0x001d54a8: not $v1, $a3
    v1 = a0 & v1;                                               // 0x001d54ac: and $v1, $a0, $v1
    v1 = a3 | v1;                                               // 0x001d54b0: or $v1, $a3, $v1
    *(uint8_t*)((v0) + 0xf) = v1;                               // 0x001d54b4: sb $v1, 0xf($v0)
    v1 = *(uint8_t*)(v0);                                       // 0x001d54b8: lbu $v1, 0($v0)
    v1 = v1 + 1;                                                // 0x001d54bc: addiu $v1, $v1, 1
    *(uint8_t*)(v0) = v1;                                       // 0x001d54c0: sb $v1, 0($v0)
    goto label_0x1d5514;                                        // 0x001d54c4: b 0x1d5514
    v0 = *(uint8_t*)((v0) + 0xe);                               // 0x001d54c8: lbu $v0, 0xe($v0)
label_0x1d54cc:
    func_001d5380();  // 1d5380                                // 0x001d54cc: jal 0x1d5380
    /* nop */                                                   // 0x001d54d0: nop 
    if (s0 != 0) goto label_0x1d54e8;                           // 0x001d54d8: bnez $s0, 0x1d54e8
    /* nop */                                                   // 0x001d54dc: nop 
    goto label_0x1d5514;                                        // 0x001d54e0: b 0x1d5514
    v0 = -1;                                                    // 0x001d54e4: addiu $v0, $zero, -1
label_0x1d54e8:
    v0 = t0 & 0xffff;                                           // 0x001d54e8: andi $v0, $t0, 0xffff
    *(uint16_t*)((s0) + 0x12) = t0;                             // 0x001d54ec: sh $t0, 0x12($s0)
    a1 = v0 & 0x7fff;                                           // 0x001d54f0: andi $a1, $v0, 0x7fff
    v0 = 1;                                                     // 0x001d54f8: addiu $v0, $zero, 1
    a2 = s0 + 2;                                                // 0x001d54fc: addiu $a2, $s0, 2
    *(uint8_t*)(s0) = v0;                                       // 0x001d5500: sb $v0, 0($s0)
    *(uint8_t*)((s0) + 0xf) = a3;                               // 0x001d5504: sb $a3, 0xf($s0)
    func_001d5730();  // 1d5730                                // 0x001d5508: jal 0x1d5730
    *(uint8_t*)((s0) + 0x10) = t1;                              // 0x001d550c: sb $t1, 0x10($s0)
    v0 = *(uint8_t*)((s0) + 0xe);                               // 0x001d5510: lbu $v0, 0xe($s0)
label_0x1d5514:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d5518: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d551c: jr $ra
    sp = sp + 0x20;                                             // 0x001d5520: addiu $sp, $sp, 0x20
}