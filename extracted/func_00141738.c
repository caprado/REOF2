void func_00141738() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00141738: addiu $sp, $sp, -0x20
    func_00141738();  // 0x141628                                // 0x00141764: jal 0x141628
    func_0010af38();  // 0x10ae00                                // 0x0014176c: jal 0x10ae00
    a1 = 0x22 << 16;                                            // 0x00141774: lui $a1, 0x22
    s0 = s0 - v0;                                               // 0x00141778: subu $s0, $s0, $v0
    a1 = a1 + 0x6470;                                           // 0x0014177c: addiu $a1, $a1, 0x6470
    a2 = s0 + -1;                                               // 0x00141780: addiu $a2, $s0, -1
    func_0010b0e8();  // 0x10af38                                // 0x00141784: jal 0x10af38
    func_0010af38();  // 0x10ae00                                // 0x0014178c: jal 0x10ae00
    func_0010af38();  // 0x10ae00                                // 0x00141798: jal 0x10ae00
    s1 = s1 + v0;                                               // 0x0014179c: addu $s1, $s1, $v0
    a2 = 4;                                                     // 0x001417a0: addiu $a2, $zero, 4
    a2 = a2 - v0;                                               // 0x001417a8: subu $a2, $a2, $v0
    return func_00141738();  // Tail call                        // 0x001417c8: j 0x141628
    sp = sp + 0x20;                                             // 0x001417cc: addiu $sp, $sp, 0x20
    sp = sp + -0x30;                                            // 0x001417d0: addiu $sp, $sp, -0x30
    func_001413a8();  // 0x141390                                // 0x001417f4: jal 0x141390
    a1 = s1 << 1;                                               // 0x001417fc: sll $a1, $s1, 1
    v0 = a1 + s1;                                               // 0x00141800: addu $v0, $a1, $s1
    v0 = v0 << 4;                                               // 0x00141804: sll $v0, $v0, 4
    at = 0x25 << 16;                                            // 0x00141808: lui $at, 0x25
    at = at + 0x5fa0;                                           // 0x0014180c: addiu $at, $at, 0x5fa0
    v0 = at + v0;                                               // 0x00141810: addu $v0, $at, $v0
    goto label_0x141844;                                        // 0x00141814: b 0x141844
    a2 = 0x25 << 16;                                            // 0x00141818: lui $a2, 0x25
    /* nop */                                                   // 0x0014181c: nop 
    v0 = (s0 < 6) ? 1 : 0;                                      // 0x00141820: slti $v0, $s0, 6
    if (v0 == 0) goto label_0x14185c;                           // 0x00141824: beqz $v0, 0x14185c
    v0 = 6;                                                     // 0x00141828: addiu $v0, $zero, 6
    v0 = a1 + s1;                                               // 0x0014182c: addu $v0, $a1, $s1
    a0 = a2 + 0x5fa0;                                           // 0x00141830: addiu $a0, $a2, 0x5fa0
    v0 = v0 << 1;                                               // 0x00141834: sll $v0, $v0, 1
    v0 = v0 + s0;                                               // 0x00141838: addu $v0, $v0, $s0
    v0 = v0 << 3;                                               // 0x0014183c: sll $v0, $v0, 3
    v0 = v0 + a0;                                               // 0x00141840: addu $v0, $v0, $a0
label_0x141844:
    v1 = *(int32_t*)(v0);                                       // 0x00141844: lw $v1, 0($v0)
    /* bnezl $v1, 0x141820 */                                   // 0x00141848: bnezl $v1, 0x141820
    s0 = s0 + 1;                                                // 0x0014184c: addiu $s0, $s0, 1
    *(uint32_t*)((v0) + 4) = s2;                                // 0x00141850: sw $s2, 4($v0)
    *(uint32_t*)(v0) = s3;                                      // 0x00141854: sw $s3, 0($v0)
    v0 = 6;                                                     // 0x00141858: addiu $v0, $zero, 6
label_0x14185c:
    if (s0 != v0) goto label_0x14186c;                          // 0x0014185c: bne $s0, $v0, 0x14186c
    a0 = 0x22 << 16;                                            // 0x00141860: lui $a0, 0x22
    func_001415b8();  // 0x141568                                // 0x00141864: jal 0x141568
    a0 = &str_00226478;  // "1051002:SVM_DelCbSvr:illegal id"   // 0x00141868: addiu $a0, $a0, 0x6478
label_0x14186c:
    func_001413c0();  // 0x1413a8                                // 0x0014186c: jal 0x1413a8
    /* nop */                                                   // 0x00141870: nop 
    v0 = -1;                                                    // 0x00141874: addiu $v0, $zero, -1
    v1 = s0 ^ 6;                                                // 0x00141878: xori $v1, $s0, 6
    if (v1 != 0) v0 = s0;                                       // 0x00141880: movn $v0, $s0, $v1
    return;                                                     // 0x00141894: jr $ra
    sp = sp + 0x30;                                             // 0x00141898: addiu $sp, $sp, 0x30
}