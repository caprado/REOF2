void func_00170960() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00170960: addiu $sp, $sp, -0x30
    PollSema();  // 0x114320                                    // 0x00170990: jal 0x114320
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00170994: lw $a0, 0x40($s0)
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x00170998: lw $v1, 0xc($s0)
    a1 = *(int32_t*)((s0) + 0x10);                              // 0x0017099c: lw $a1, 0x10($s0)
    a2 = *(int32_t*)((s0) + 0x14);                              // 0x001709a0: lw $a2, 0x14($s0)
    v1 = v1 + a1;                                               // 0x001709a4: addu $v1, $v1, $a1
    a0 = *(int32_t*)((s0) + 0x18);                              // 0x001709a8: lw $a0, 0x18($s0)
    v1 = v1 << 0xb;                                             // 0x001709ac: sll $v1, $v1, 0xb
    v0 = *(int32_t*)((s0) + 8);                                 // 0x001709b0: lw $v0, 8($s0)
    v1 = v1 + a2;                                               // 0x001709b4: addu $v1, $v1, $a2
    /* beqzl $a0, 0x1709c0 */                                   // 0x001709b8: beqzl $a0, 0x1709c0
    /* break (trap) */                                          // 0x001709bc: break 0, 7
    /* divide: v1 / a0 -> hi:lo */                              // 0x001709c0: div $zero, $v1, $a0
    v0 = v0 - a1;                                               // 0x001709c4: subu $v0, $v0, $a1
    v0 = v0 << 0xb;                                             // 0x001709c8: sll $v0, $v0, 0xb
    v0 = v0 + -0x1000;                                          // 0x001709cc: addiu $v0, $v0, -0x1000
    a1 = v0 - a2;                                               // 0x001709d0: subu $a1, $v0, $a2
    /* mfhi $a3 */                                              // 0x001709d4
    a0 = a0 - a3;                                               // 0x001709d8: subu $a0, $a0, $a3
    v0 = (a0 < a1) ? 1 : 0;                                     // 0x001709dc: slt $v0, $a0, $a1
    /* bnezl $v0, 0x170a08 */                                   // 0x001709e0: bnezl $v0, 0x170a08
    *(uint32_t*)(s1) = a0;                                      // 0x001709e4: sw $a0, 0($s1)
    v0 = *(int32_t*)(s0);                                       // 0x001709e8: lw $v0, 0($s0)
    *(uint32_t*)(s1) = a1;                                      // 0x001709ec: sw $a1, 0($s1)
    v0 = v0 + a3;                                               // 0x001709f0: addu $v0, $v0, $a3
    *(uint32_t*)(s4) = 0;                                       // 0x001709f4: sw $zero, 0($s4)
    *(uint32_t*)(s2) = v0;                                      // 0x001709f8: sw $v0, 0($s2)
    goto label_0x170a28;                                        // 0x001709fc: b 0x170a28
    *(uint32_t*)(s3) = 0;                                       // 0x00170a00: sw $zero, 0($s3)
    /* nop */                                                   // 0x00170a04: nop 
    a0 = *(int32_t*)(s0);                                       // 0x00170a08: lw $a0, 0($s0)
    v0 = *(int32_t*)((s0) + 0x18);                              // 0x00170a0c: lw $v0, 0x18($s0)
    v1 = a0 + a3;                                               // 0x00170a10: addu $v1, $a0, $a3
    v0 = v0 - a3;                                               // 0x00170a14: subu $v0, $v0, $a3
    *(uint32_t*)(s2) = v1;                                      // 0x00170a18: sw $v1, 0($s2)
    v0 = a1 - v0;                                               // 0x00170a1c: subu $v0, $a1, $v0
    *(uint32_t*)(s3) = a0;                                      // 0x00170a20: sw $a0, 0($s3)
    *(uint32_t*)(s4) = v0;                                      // 0x00170a24: sw $v0, 0($s4)
label_0x170a28:
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00170a28: lw $a0, 0x40($s0)
    return iSignalSema();  // Tail call                         // 0x00170a44: j 0x114300
    sp = sp + 0x30;                                             // 0x00170a48: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x00170a4c: nop 
    sp = sp + -0x20;                                            // 0x00170a50: addiu $sp, $sp, -0x20
    PollSema();  // 0x114320                                    // 0x00170a68: jal 0x114320
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00170a6c: lw $a0, 0x40($s0)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x00170a70: lw $v1, 0x14($s0)
    v1 = v1 + s1;                                               // 0x00170a78: addu $v1, $v1, $s1
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00170a7c: lw $a0, 0x40($s0)
    *(uint32_t*)((s0) + 0x14) = v1;                             // 0x00170a88: sw $v1, 0x14($s0)
    return iSignalSema();  // Tail call                         // 0x00170a98: j 0x114300
    sp = sp + 0x20;                                             // 0x00170a9c: addiu $sp, $sp, 0x20
    sp = sp + -0x20;                                            // 0x00170aa0: addiu $sp, $sp, -0x20
    PollSema();  // 0x114320                                    // 0x00170ab8: jal 0x114320
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00170abc: lw $a0, 0x40($s0)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x00170ac0: lw $v1, 0x14($s0)
    v1 = v1 - s1;                                               // 0x00170ac8: subu $v1, $v1, $s1
    *(uint32_t*)((s0) + 0x14) = v1;                             // 0x00170ad0: sw $v1, 0x14($s0)
    if (v1 >= 0) goto label_0x170b00;                           // 0x00170ad4: bgez $v1, 0x170b00
    /* nop */                                                   // 0x00170adc: nop 
label_0x170ae0:
    /* nop */                                                   // 0x00170ae0: nop 
    /* nop */                                                   // 0x00170ae4: nop 
    /* nop */                                                   // 0x00170ae8: nop 
    /* nop */                                                   // 0x00170aec: nop 
    /* nop */                                                   // 0x00170af0: nop 
    goto label_0x170ae0;                                        // 0x00170af4: b 0x170ae0
    /* nop */                                                   // 0x00170af8: nop 
    /* nop */                                                   // 0x00170afc: nop 
label_0x170b00:
    iSignalSema();  // 0x114300                                 // 0x00170b00: jal 0x114300
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00170b04: lw $a0, 0x40($s0)
    return;                                                     // 0x00170b18: jr $ra
    sp = sp + 0x20;                                             // 0x00170b1c: addiu $sp, $sp, 0x20
}