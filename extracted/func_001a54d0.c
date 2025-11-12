void func_001a54d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a54d0: addiu $sp, $sp, -0x10
    a1 = 0x10;                                                  // 0x001a54e0: addiu $a1, $zero, 0x10
    func_001a54d0();  // 0x1a5460                                // 0x001a54e4: jal 0x1a5460
    t2 = t2 + v0;                                               // 0x001a54ec: addu $t2, $t2, $v0
    goto label_0x1a5528;                                        // 0x001a54f4: b 0x1a5528
label_0x1a54fc:
    v0 = *(uint16_t*)((a3) + 6);                                // 0x001a54fc: lhu $v0, 6($a3)
    at = (t0 < v0) ? 1 : 0;                                     // 0x001a5500: slt $at, $t0, $v0
    if (at == 0) goto label_0x1a5534;                           // 0x001a5504: beqz $at, 0x1a5534
    func_001a54d0();  // 0x1a5460                                // 0x001a550c: jal 0x1a5460
    a1 = 0x30;                                                  // 0x001a5510: addiu $a1, $zero, 0x30
    t2 = t2 + v0;                                               // 0x001a5514: addu $t2, $t2, $v0
    t0 = t0 + 1;                                                // 0x001a5518: addiu $t0, $t0, 1
    v0 = *(int32_t*)(a2);                                       // 0x001a551c: lw $v0, 0($a2)
    t2 = t2 + v0;                                               // 0x001a5520: addu $t2, $t2, $v0
label_0x1a5528:
    v0 = (t0 < t1) ? 1 : 0;                                     // 0x001a5528: slt $v0, $t0, $t1
    if (v0 != 0) goto label_0x1a54fc;                           // 0x001a552c: bnez $v0, 0x1a54fc
    /* nop */                                                   // 0x001a5530: nop 
label_0x1a5534:
    return;                                                     // 0x001a553c: jr $ra
    sp = sp + 0x10;                                             // 0x001a5540: addiu $sp, $sp, 0x10
}