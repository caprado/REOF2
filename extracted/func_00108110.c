void func_00108110() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0xffff << 16;                                          // 0x00108110: lui $v0, 0xffff
    v0 = a0 & v0;                                               // 0x00108114: and $v0, $a0, $v0
    if (v0 != 0) goto label_0x108128;                           // 0x00108118: bnez $v0, 0x108128
    a1 = 0x10;                                                  // 0x00108120: addiu $a1, $zero, 0x10
    a0 = a0 << 0x10;                                            // 0x00108124: sll $a0, $a0, 0x10
label_0x108128:
    v0 = 0xff00 << 16;                                          // 0x00108128: lui $v0, 0xff00
    v0 = a0 & v0;                                               // 0x0010812c: and $v0, $a0, $v0
    if (v0 != 0) goto label_0x108140;                           // 0x00108130: bnez $v0, 0x108140
    v0 = 0xf000 << 16;                                          // 0x00108134: lui $v0, 0xf000
    a1 = a1 + 8;                                                // 0x00108138: addiu $a1, $a1, 8
    a0 = a0 << 8;                                               // 0x0010813c: sll $a0, $a0, 8
label_0x108140:
    v0 = a0 & v0;                                               // 0x00108140: and $v0, $a0, $v0
    if (v0 != 0) goto label_0x108154;                           // 0x00108144: bnez $v0, 0x108154
    v0 = 0xc000 << 16;                                          // 0x00108148: lui $v0, 0xc000
    a1 = a1 + 4;                                                // 0x0010814c: addiu $a1, $a1, 4
    a0 = a0 << 4;                                               // 0x00108150: sll $a0, $a0, 4
label_0x108154:
    v0 = a0 & v0;                                               // 0x00108154: and $v0, $a0, $v0
    if (v0 != 0) goto label_0x108168;                           // 0x00108158: bnez $v0, 0x108168
    /* nop */                                                   // 0x0010815c: nop 
    a1 = a1 + 2;                                                // 0x00108160: addiu $a1, $a1, 2
    a0 = a0 << 2;                                               // 0x00108164: sll $a0, $a0, 2
label_0x108168:
    if (a0 < 0) goto label_0x108188;                            // 0x00108168: bltz $a0, 0x108188
    v1 = 0x4000 << 16;                                          // 0x00108170: lui $v1, 0x4000
    a1 = a1 + 1;                                                // 0x00108174: addiu $a1, $a1, 1
    v1 = a0 & v1;                                               // 0x00108178: and $v1, $a0, $v1
    if (v1 == 0) goto label_0x108188;                           // 0x0010817c: beqz $v1, 0x108188
    v0 = 0x20;                                                  // 0x00108180: addiu $v0, $zero, 0x20
label_0x108188:
    return;                                                     // 0x00108188: jr $ra
    /* nop */                                                   // 0x0010818c: nop 
}